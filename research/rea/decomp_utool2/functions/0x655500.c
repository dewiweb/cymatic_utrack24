// rea decompile_all
// name: FUN_00655500
// address: 0x655500
// body: available
// range: 0x655500-0x6557f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6557e0 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6557e7 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6557ee to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655500(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int in_EDX;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX == 0) goto LAB_006557ce;
  if ((*(byte *)(in_ECX + 0x2c) & 0x40) == 0) {
    FUN_0064c6e0();
  }
  uVar7 = *(undefined1 *)(in_ECX + 0x10b);
  iVar6 = *(int *)(in_ECX + 200);
  bVar1 = *(byte *)(in_ECX + 0x10e);
  if (bVar1 < 8) {
    uVar4 = (uint)bVar1 * iVar6 + 7 >> 3;
  }
  else {
    uVar4 = (uint)(bVar1 >> 3) * iVar6;
  }
  if ((*(char *)(in_ECX + 0x108) != '\0') && ((*(byte *)(in_ECX + 0x30) & 2) != 0)) {
    switch(*(undefined1 *)(in_ECX + 0x109)) {
    case 0:
      if ((*(byte *)(in_ECX + 0xcc) & 7) != 0) {
LAB_006555af:
        FUN_0064ca00();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc,extraout_EDX,iVar6,uVar4,uVar7);
        return;
      }
      break;
    case 1:
      if (((*(byte *)(in_ECX + 0xcc) & 7) != 0) || (*(uint *)(in_ECX + 0xb4) < 5)) {
        FUN_0064ca00();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      break;
    case 2:
      if (((byte)*(undefined4 *)(in_ECX + 0xcc) & 7) != 4) {
        FUN_0064ca00();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      break;
    case 3:
      if (((*(byte *)(in_ECX + 0xcc) & 3) != 0) || (*(uint *)(in_ECX + 0xb4) < 3)) {
        FUN_0064ca00();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      break;
    case 4:
      if (((byte)*(undefined4 *)(in_ECX + 0xcc) & 3) != 2) {
        FUN_0064ca00();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      break;
    case 5:
      if (((*(byte *)(in_ECX + 0xcc) & 1) != 0) || (*(uint *)(in_ECX + 0xb4) < 2)) {
        FUN_0064ca00();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      break;
    default:
      if ((*(byte *)(in_ECX + 0xcc) & 1) == 0) goto LAB_006555af;
    }
  }
  if ((*(byte *)(in_ECX + 0x28) & 4) == 0) {
LAB_006557de:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  FUN_0064cb50(uVar4 + 1);
  bVar2 = **(byte **)(in_ECX + 0xd8);
  if (bVar2 != 0) {
    if (4 < bVar2) goto LAB_006557de;
    FUN_0064cd60(*(byte **)(in_ECX + 0xd8) + 1,*(int *)(in_ECX + 0xd4) + 1,bVar2);
  }
  FUN_004c2c30(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8),uVar4 + 1);
  if (((*(byte *)(in_ECX + 0x21c) & 4) != 0) && (*(char *)(in_ECX + 0x220) == '@')) {
    FUN_00650d70();
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_00653aa0();
  }
  if (*(byte *)(in_ECX + 0x113) == 0) {
    *(byte *)(in_ECX + 0x113) = bVar1;
    if (*(byte *)(in_ECX + 0x112) < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  }
  else if (*(byte *)(in_ECX + 0x113) != bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(char *)(in_ECX + 0x108) == '\0') || ((*(uint *)(in_ECX + 0x30) & 2) == 0)) {
    if (in_EDX != 0) {
      uVar5 = 0xffffffff;
      goto LAB_0065579d;
    }
  }
  else {
    if (*(byte *)(in_ECX + 0x109) < 6) {
      FUN_0064d0f0(*(byte *)(in_ECX + 0x109),*(uint *)(in_ECX + 0x30));
    }
    if (in_EDX != 0) {
      uVar5 = 0;
LAB_0065579d:
      FUN_0064d4f0(uVar5);
    }
  }
  FUN_0064ca00();
  if (*(code **)(in_ECX + 0x178) != (code *)0x0) {
    (**(code **)(in_ECX + 0x178))();
  }
LAB_006557ce:
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

