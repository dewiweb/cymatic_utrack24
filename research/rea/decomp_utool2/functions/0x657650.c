// rea decompile_all
// name: FUN_00657650
// address: 0x657650
// body: available
// range: 0x657650-0x657792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x65778e to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00657650(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(in_ECX + 0x215) != '\0') {
    return;
  }
  if ((*(byte *)(in_ECX + 0x2ce) & 2) == 0) {
    return;
  }
  uVar5 = *(uint *)(in_ECX + 0x2b8);
  uVar2 = *(uint *)(in_ECX + 0x2c4);
  uVar3 = *(uint *)(in_ECX + 0x2ac);
  iVar4 = uVar2 + uVar5 + uVar3;
  if ((((((iVar4 < 1) || ((int)uVar3 < 0)) || (iVar1 = FUN_006571e0(0x8000,iVar4), iVar1 == 0)) ||
       ((0x8000 < uVar3 || ((int)uVar5 < 0)))) ||
      ((iVar1 = FUN_006571e0(0x8000,iVar4), iVar1 == 0 || ((0x8000 < uVar5 || ((int)uVar2 < 0))))))
     || ((iVar4 = FUN_006571e0(0x8000,iVar4), iVar4 == 0 ||
         ((0x8000 < uVar2 || (iVar4 = uVar2 + uVar5 + uVar3, 0x8001 < iVar4)))))) goto LAB_0065778c;
  if (iVar4 < 0x8001) {
    if (iVar4 < 0x8000) {
      iVar4 = 1;
      goto LAB_00657751;
    }
  }
  else {
    iVar4 = -1;
LAB_00657751:
    if ((int)uVar5 < (int)uVar3) {
LAB_00657761:
      if ((int)uVar3 < (int)uVar2) {
LAB_00657769:
        uVar2 = uVar2 + iVar4;
      }
      else {
        uVar3 = uVar3 + iVar4;
      }
    }
    else {
      if ((int)uVar5 < (int)uVar2) {
        if ((int)uVar5 <= (int)uVar3) goto LAB_00657761;
        goto LAB_00657769;
      }
      uVar5 = uVar5 + iVar4;
    }
  }
  if (uVar2 + uVar5 + uVar3 == 0x8000) {
    *(short *)(in_ECX + 0x216) = (short)uVar3;
    *(short *)(in_ECX + 0x218) = (short)uVar5;
    return;
  }
LAB_0065778c:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

