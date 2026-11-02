// rea decompile_all
// name: CVSToolsListBox::OnSelectionChanged
// address: 0x100e671c
// body: available
// range: 0x100e671c-0x100e6811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CVSToolsListBox::OnSelectionChanged(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CVSToolsListBox::OnSelectionChanged(CVSToolsListBox *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x174))();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 0x184))(iVar1);
    if (iVar1 != 0) {
      FUN_10007c90((void *)(*(int *)(this + 0x1d0) + 0x132c),(undefined4 *)(iVar1 + 0x14));
      FUN_10007c90((void *)(*(int *)(this + 0x1d0) + 0x1330),(undefined4 *)(iVar1 + 8));
      FUN_10007c90((void *)(*(int *)(this + 0x1d0) + 0x1334),(undefined4 *)(iVar1 + 0xc));
      goto LAB_100e67b7;
    }
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty
            ((CSimpleStringT<wchar_t,0> *)(*(int *)(this + 0x1d0) + 0x132c));
  ATL::CSimpleStringT<wchar_t,0>::Empty
            ((CSimpleStringT<wchar_t,0> *)(*(int *)(this + 0x1d0) + 0x1330));
  ATL::CSimpleStringT<wchar_t,0>::Empty
            ((CSimpleStringT<wchar_t,0> *)(*(int *)(this + 0x1d0) + 0x1334));
LAB_100e67b7:
  (**(code **)(**(int **)(*(int *)(this + 0x1d0) + 0x133c) + 0x178))
            (*(undefined4 *)(*(int *)(this + 0x1d0) + 0x1338));
  *(int *)(*(int *)(this + 0x1d0) + 0x1338) = iVar1;
  CWnd::UpdateData(*(CWnd **)(this + 0x1d0),0);
  CMFCToolBarsToolsPropertyPage::EnableControls(*(CMFCToolBarsToolsPropertyPage **)(this + 0x1d0));
  (**(code **)(**(int **)(*(int *)(this + 0x1d0) + 0x133c) + 0x17c))
            (*(undefined4 *)(*(int *)(this + 0x1d0) + 0x1338));
  return;
}

