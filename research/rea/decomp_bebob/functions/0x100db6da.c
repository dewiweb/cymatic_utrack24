// rea decompile_all
// name: CMFCToolTipCtrl::GetIconSize
// address: 0x100db6da
// body: available
// range: 0x100db6da-0x100db7ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolTipCtrl::GetIconSize(void)
   
   Library: Visual Studio 2010 Release */

int * __thiscall CMFCToolTipCtrl::GetIconSize(CMFCToolTipCtrl *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000004;
  CMFCToolTipCtrl *local_c;
  CMFCToolTipCtrl *pCStack_8;
  
  iVar4 = 0;
  if (*(int **)(this + 0x9c) == (int *)0x0) {
    iVar1 = *(int *)(this + 0x98);
    if (((iVar1 != 0) && (iVar3 = *(int *)(this + 0x94), iVar3 != 0)) && (*(int *)(iVar3 + 4) != 0))
    {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar4 = *(int *)(iVar1 + 0x34);
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x38);
      }
      if (iVar4 < 0) {
        iVar4 = 0;
        iVar1 = 0;
      }
      else {
        iVar4 = *(int *)(iVar3 + 0x50);
        iVar1 = *(int *)(iVar3 + 0x54);
      }
      *in_stack_00000004 = iVar4;
      in_stack_00000004[1] = iVar1;
      return in_stack_00000004;
    }
  }
  else {
    local_c = this;
    pCStack_8 = this;
    iVar1 = (**(code **)(**(int **)(this + 0x9c) + 0x1c4))();
    if (iVar1 != 0) {
      piVar2 = *(int **)(this + 0x9c);
      if (piVar2[0x3f] != 0) {
        iVar4 = piVar2[0x4c];
        *(uint *)(this + 0xd4) = (uint)(iVar4 == 0);
        (**(code **)(*piVar2 + 0x70))(in_stack_00000004,(uint)(iVar4 == 0));
        return in_stack_00000004;
      }
      iVar1 = 0;
      iVar3 = 0;
      if ((piVar2[0x4c] != 0) && (-1 < piVar2[0x3a])) {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x70))(&local_c,0);
        iVar1 = *piVar2;
        iVar3 = piVar2[1];
      }
      if ((iVar1 != 0) || (iVar3 != 0)) {
        *(undefined4 *)(this + 0xd4) = 0;
        *in_stack_00000004 = iVar1;
        in_stack_00000004[1] = iVar3;
        return in_stack_00000004;
      }
      iVar1 = 0;
      if (-1 < (*(int **)(this + 0x9c))[0x39]) {
        piVar2 = (int *)(**(code **)(**(int **)(this + 0x9c) + 0x70))(&local_c,1);
        iVar1 = *piVar2;
        iVar4 = piVar2[1];
      }
      *(undefined4 *)(this + 0xd4) = 1;
      *in_stack_00000004 = iVar1;
      goto LAB_100db7e5;
    }
  }
  *in_stack_00000004 = 0;
LAB_100db7e5:
  in_stack_00000004[1] = iVar4;
  return in_stack_00000004;
}

