// rea decompile_all
// name: CPrintDialog::CPrintDialog
// address: 0x100f29a3
// body: available
// range: 0x100f29a3-0x100f2a68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CPrintDialog::CPrintDialog(int,unsigned long,class CWnd *)
   
   Library: Visual Studio 2010 Release */

CPrintDialog * __thiscall
CPrintDialog::CPrintDialog(CPrintDialog *this,int param_1,ulong param_2,CWnd *param_3)

{
  uint *puVar1;
  int iVar2;
  
  CDialog::CDialog((CDialog *)this,0,param_3);
  *(undefined ***)this = vftable;
  *(CPrintDialog **)(this + 0x94) = this + 0x98;
  _memset(this + 0x98,0,0x42);
  **(undefined4 **)(this + 0x94) = 0x42;
  *(ulong *)(*(int *)(this + 0x94) + 0x14) = param_2 | 0x3000;
  iVar2 = AfxHelpEnabled();
  if (iVar2 != 0) {
    *(uint *)(*(int *)(this + 0x94) + 0x14) = *(uint *)(*(int *)(this + 0x94) + 0x14) | 0x800;
  }
  *(code **)(*(int *)(this + 0x94) + 0x2a) = _AfxCommDlgProc;
  *(code **)(*(int *)(this + 0x94) + 0x2e) = _AfxCommDlgProc;
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x74) = 0x7008;
    puVar1 = (uint *)(*(int *)(this + 0x94) + 0x14);
    *puVar1 = *puVar1 | 0x100;
  }
  else {
    *(undefined4 *)(this + 0x74) = 0x7009;
    puVar1 = (uint *)(*(int *)(this + 0x94) + 0x14);
    *puVar1 = *puVar1 | 0x40;
  }
  *(uint *)(*(int *)(this + 0x94) + 0x14) = *(uint *)(*(int *)(this + 0x94) + 0x14) & 0xfffffdff;
  return this;
}

