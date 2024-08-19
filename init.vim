" ================ Editor Enhancement =============
set number
set relativenumber
"set cursorline
"set wrap

"4 for python
set tabstop=2
set shiftwidth=2
set softtabstop=2

set ignorecase
set smartcase
"set notimeout
set jumpoptions=stack
set mouse=a


"autocmd TermOpen * split

" ================ Basic Mappings ==================
" map leader key to SAPCE
let mapleader="\<SPACE>"
"let mapleader=" "

" map Esc to jk 
imap jk <Esc>
imap kj <Esc>

" J/K keys for 5 times j/k (faster navigation)
noremap <silent> J 5j
noremap <silent> K 5k

" H key: go to the start of the line
noremap <silent> H 0
" L key: go to the end of the line
noremap <silent> L $

" Faster in-line navigation
noremap W 5w
noremap B 5b
 
" Paste to system clickboard
vnoremap Y "*y

" :wq
noremap <leader><leader>s :wq<CR>
" ctrl+o ctrl+i navigate to last or next jump location
" noremap <leader>o :<CR>o


" Cancel highlight search
noremap <leader><leader>h :nohlsearch<CR>

" set h (same as n, cursor left) to 'end of word'
" kind of uesless. 2023.3.8
"noremap h e

" Ctrl + I or K will move up/down the view port without moving the cursor
noremap <C-J> 5<C-y>
noremap <C-K> 5<C-e>

" more easy way to save or quit
" noremap ; :
nnoremap Q :q<CR>
"nnoremap s <Nop>
nnoremap S :w<CR>

noremap <leader>f :FormatCode<CR>

" Open the vimrc file anytime
" (next 2 line is another way)
"nnoremap <space>rl :so ~/.config/nvim/init.vim<CR>
"nnoremap <space>rc :e ~/.config/nvim/init.vim<CR>
nnoremap <LEADER>rc :e $HOME/.config/nvim/init.vim<CR>
nnoremap <LEADER>rv :e .nvimrc<CR>
augroup NVIMRC
    autocmd!
    autocmd BufWritePost *.nvimrc exec ":so %"
augroup END

"===================== Auto load for first time uses ===================
if empty(glob('~/.config/nvim/autoload/plug.vim'))
  :exe '!curl -fLo ~/.config/nvim/autoload/plug.vim --create-dirs
              \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim'
  au VimEnter * PlugInstall --sync | source $MYVIMRC
endif

" ==================== Install Plugins with Vim-Plug ===================
" ==============  plugins  begin ===================
call plug#begin('~/.config/nvim/plugged')

  " UI Beautification
	" start screen
	Plug 'mhinz/vim-startify'
	" rainbow parentheses
	Plug 'luochen1990/rainbow'
	" kind os enhance, like change the insert cursor...
	Plug 'wincent/terminus'

	" Themes
	Plug 'mhartington/oceanic-next'
	Plug 'folke/tokyonight.nvim', { 'branch': 'main' }

	" enhance editor
	" kind of comment using? not figure out 
  Plug 'tomtom/tcomment_vim'
	" Auto pairs
  Plug 'jiangmiao/auto-pairs'

	" File Tree
	" Plug 'nvim-tree/nvim-web-devicons' " optional, for file icons
	" Plug 'nvim-tree/nvim-tree.lua'

	" Bottem line
	Plug 'itchyny/lightline.vim'

	" Telescope not installed
	Plug 'nvim-lua/plenary.nvim'
	Plug 'nvim-telescope/telescope.nvim', { 'tag': '0.1.1' }
	" or                                , { 'branch': '0.1.x' }

	" Treesitter
	Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
	
	"Auto format
  Plug 'google/vim-maktaba'
  Plug 'google/vim-codefmt'
  Plug 'rhysd/vim-clang-format'


	" Coc
	" Use release branch (recommended)
  Plug 'neoclide/coc.nvim', {'branch': 'release'}

	" Markdown
	"preview
	" If you have nodejs
	Plug 'iamcco/markdown-preview.nvim', { 'do': 'cd app && npx --yes yarn install' }


	call plug#end()
" =============   plugins  end  ====================


" ======================= Configuations =================================

" ========================== Themes ========================
if (has("termguicolors"))
 set termguicolors
endif

" ====== OceanicNext =====
syntax enable
" colorscheme OceanicNext
let g:oceanic_next_terminal_bold = 1
let g:oceanic_next_terminal_italic = 1

" ====== TokyoNight ======
" Enable
" Vim Script
" colorscheme tokyonight
" There are also colorschemes for the different styles
" colorscheme tokyonight-night
" colorscheme tokyonight-storm
" colorscheme tokyonight-day
colorscheme tokyonight-moon

" ========================== UI ===========================
" ====== BottemLine =====
" Using in lightline
let g:lightline = {'colorscheme': 'tokyonight'}

" ====== Rainbow ========
"set to 0 if you want to enable it later via :RainbowToggle
let g:rainbow_active = 1

" ==================== Others ============================
" ====== nvim-treesitter ===
"if g:nvim_plugins_installation_completed == 1
lua <<EOF
require'nvim-treesitter.configs'.setup {
	ensure_installed = { "json", "html", "css", "vim", "lua", "java","javascript", "typescript","cpp","markdown","c"},
	highlight = {
		enbale=true,
		disable = { "rust" }, 
		additional_vim_regex_highlighting = false,
	},
}
EOF
"endif

" ========= tomtom/tcomment_vim ===
let g:tcomment_textobject_inlinecomment = ''
nmap <LEADER>cn g>c
vmap <LEADER>cn g>
nmap <LEADER>cu g<c
vmap <LEADER>cu g<

"========== Autoformat =============
augroup autoformat_settings
  autocmd FileType bzl AutoFormatBuffer buildifier
  autocmd FileType c,cpp,proto,javascript,arduino AutoFormatBuffer clang-format
  autocmd FileType dart AutoFormatBuffer dartfmt
  autocmd FileType go AutoFormatBuffer gofmt
  autocmd FileType gn AutoFormatBuffer gn
  autocmd FileType html,css,sass,scss,less,json AutoFormatBuffer js-beautify
  autocmd FileType java AutoFormatBuffer google-java-format
  autocmd FileType python AutoFormatBuffer yapf
  " Alternative: autocmd FileType python AutoFormatBuffer autopep8
  autocmd FileType rust AutoFormatBuffer rustfmt
  autocmd FileType vue AutoFormatBuffer prettier
augroup END

" ====== Telescope ==================
" Find files using Telescope command-line sugar.
nnoremap <leader>ff <cmd>Telescope find_files<cr>
nnoremap <leader>fg <cmd>Telescope live_grep<cr>
nnoremap <leader>fb <cmd>Telescope buffers<cr>
nnoremap <leader>fh <cmd>Telescope help_tags<cr>

" ====== Coc ========
let g:coc_global_extensions = [
      \ 'coc-json',
      \ 'coc-tsserver',
      \ 'coc-css',
      \ 'coc-html',
      \ 'coc-vimlsp',
      \ 'coc-cmake',
      \ 'coc-highlight',
      \ 'coc-pyright',
      \ ]
set hidden
set updatetime=300
set shortmess+=c
set signcolumn=number

"<TAB> and <s-TAB>
inoremap <silent><expr> <TAB>
      \ coc#pum#visible() ? coc#pum#next(1) :
      \ CheckBackspace() ? "\<Tab>" :
      \ coc#refresh()
inoremap <expr><S-TAB> coc#pum#visible() ? coc#pum#prev(1) : "\<C-h>"

function! CheckBackspace() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction

" Make <CR> to accept selected completion item or notify coc.nvim to format
" <C-g>u breaks current undo, please make your own choice.
inoremap <silent><expr> <CR> coc#pum#visible() ? coc#pum#confirm()
                              \: "\<C-g>u\<CR>\<c-r>=coc#on_enter()\<CR>"

"show_documentation
nnoremap <silent> <LEADER>h :call <SID>show_documentation()<CR>
function! <SID>show_documentation()
  if(index(['vim', 'help'], &filetype) >= 0)
    execute 'h '.expand('<cword>')
  elseif (coc#rpc#ready())
    call CocActionAsync('doHover')
  else
    execute '!' . &keywordprg . " " . expand('<cword>')
  endif
endfunction

" highlight link CocHighlightText Visual
" autocmd CursorHold * silent call CocActionAsync('highlight')   " TODO

"rename
nmap <leader>rn <Plug>(coc-rename)
"Formating selected code
xmap <leader>f <Plug>(coc-format-selected)
command! -nargs=0 Format :call CocAction('format')

augroup mygroup
  autocmd!
  autocmd FileType typescript,json setl formatexpr=CocAction('formatSelected')
  autocmd User CocJumpPlaceholder call CocActionAsync('showSignatureHelp')
augroup end

" diagnostic info , find the ERROR
nnoremap <silent><nowait> <LEADER>d :CocList diagnostics<CR> 
nmap <silent> <LEADER>- <Plug>(coc-diagnostic-prev)
nmap <silent> <LEADER>= <Plug>(coc-diagnostic-next)
nmap <LEADER>qf <Plug>(coc-fix-current)

" Remap <C-f> and <C-b> for scroll float windows/popups.
if has('nvim-0.4.0') || has('patch-8.2.0750')
  nnoremap <silent><nowait><expr> <C-f> coc#float#has_scroll() ? coc#float#scroll(1) : "\<C-f>"
  nnoremap <silent><nowait><expr> <C-b> coc#float#has_scroll() ? coc#float#scroll(0) : "\<C-b>"
  inoremap <silent><nowait><expr> <C-f> coc#float#has_scroll() ? "\<C-r>=coc#float#scroll(1)\<CR>" : "\<Right>"
  inoremap <silent><nowait><expr> <C-b> coc#float#has_scroll() ? "\<C-r>=coc#float#scroll(0)\<CR>" : "\<Left>"
  vnoremap <silent><nowait><expr> <C-f> coc#float#has_scroll() ? coc#float#scroll(1) : "\<C-f>"
  vnoremap <silent><nowait><expr> <C-b> coc#float#has_scroll() ? coc#float#scroll(0) : "\<C-b>"
endif

" statusline support
" set statusline^=%{coc#status()}%{get(b:,'coc_current_function','')}  "TODO

" GoTo code navigation.
nmap <silent> gd <Plug>(coc-definition)
nmap <silent> gD :tab sp<CR><Plug>(coc-definition)
nmap <silent> gy <Plug>(coc-type-definition)
"nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gr <Plug>(coc-references)

function! s:generate_compile_commands()
  if empty(glob('CMakeLists.txt'))
    echo "Can't find CMakeLists.txt"
    return
  endif
  if empty(glob('.vscode'))
    execute 'silent !mkdir .vscode'
  endif
  execute '!cmake -DCMAKE_BUILD_TYPE=debug
      \ -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -S . -B .vscode'
endfunction
command! -nargs=0 Gcmake :call s:generate_compile_commands()

