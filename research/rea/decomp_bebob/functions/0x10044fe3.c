// rea decompile_all
// name: CVSListBox::OnKeyDown
// address: 0x10044fe3
// body: available
// range: 0x10044fe3-0x10045080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CVSListBox::OnKeyDown(struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CVSListBox::OnKeyDown(CVSListBox *this,tagNMHDR *param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_2 = 0;
  if (param_1 != (tagNMHDR *)0x0) {
    param_2 = (long *)0x0;
    uVar2 = GetAsyncKeyState(0x11);
    if ((uVar2 & 0x8000) != 0) {
      param_2 = (long *)0x8;
    }
    uVar2 = GetAsyncKeyState(0x12);
    if ((uVar2 & 0x8000) != 0) {
      param_2 = (long *)((uint)param_2 | 0x10);
    }
    uVar2 = GetAsyncKeyState(0x10);
    if ((uVar2 & 0x8000) != 0) {
      param_2 = (long *)((uint)param_2 | 4);
    }
    puVar3 = *(undefined4 **)(this + 0x94);
    iVar4 = 0;
    while (puVar3 != (undefined4 *)0x0) {
      iVar1 = puVar3[2];
      puVar3 = (undefined4 *)*puVar3;
      if (((iVar1 != 0) && (*(short *)(param_1 + 0xc) == (short)iVar1)) &&
         ((char)param_2 == (char)((uint)iVar1 >> 0x10))) {
        (**(code **)(*(int *)this + 400))(iVar4);
        return;
      }
      iVar4 = iVar4 + 1;
    }
    (**(code **)(*(int *)this + 0x194))(*(undefined2 *)(param_1 + 0xc),param_2);
  }
  return;
}

