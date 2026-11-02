// rea decompile_all
// name: CFileDialog::OnNotify
// address: 0x1001c678
// body: available
// range: 0x1001c678-0x1001c758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CFileDialog::OnNotify(unsigned int,long,long *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CFileDialog::OnNotify(CFileDialog *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  LRESULT LVar3;
  
  iVar1 = CWnd::OnNotify((CWnd *)this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == -0x25f) {
      (**(code **)(*(int *)this + 0x1a4))();
    }
    else {
      if (iVar1 == -0x25e) {
        lVar2 = (**(code **)(*(int *)this + 400))();
      }
      else {
        if (iVar1 == -0x25d) {
          LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x111,0xe146,0);
          if (LVar3 != 0) {
            return 1;
          }
          SendMessageW(*(HWND *)(this + 0x20),0x365,0,0);
          return 1;
        }
        if (iVar1 != -0x25c) {
          if (iVar1 == -0x25b) {
            (**(code **)(*(int *)this + 0x1a0))();
            return 1;
          }
          if (iVar1 != -0x25a) {
            if (iVar1 == -0x259) {
              (**(code **)(*(int *)this + 0x198))();
              return 1;
            }
            return 0;
          }
          (**(code **)(*(int *)this + 0x19c))();
          return 1;
        }
        lVar2 = (**(code **)(*(int *)this + 0x18c))(*(undefined4 *)(param_2 + 0x10));
      }
      *param_3 = lVar2;
    }
  }
  return 1;
}

