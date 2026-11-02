// rea decompile_all
// name: CCheckListBox::SetCheck
// address: 0x100e9fd7
// body: available
// range: 0x100e9fd7-0x100ea079 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CCheckListBox::SetCheck(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CCheckListBox::SetCheck(CCheckListBox *this,int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 == 2) && ((*(int *)(this + 0x78) == 2 || (*(int *)(this + 0x78) == 3)))) {
    NotifyWinEvent(0x800a,*(HWND *)(this + 0x20),-4,param_1 + 1);
  }
  else {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x11c))(0x199,param_1,0);
    if (piVar1 != (int *)0xffffffff) {
      if (piVar1 == (int *)0x0) {
        piVar1 = FUN_1000858a(0xc);
        if (piVar1 == (int *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          *piVar1 = 0;
          piVar1[2] = 0;
          piVar1[1] = 1;
        }
      }
      *piVar1 = param_2;
      (**(code **)(*(int *)this + 0x11c))(0x19a,param_1,piVar1);
      InvalidateCheck(this,param_1);
      NotifyWinEvent(0x800a,*(HWND *)(this + 0x20),-4,param_1 + 1);
    }
  }
  return;
}

