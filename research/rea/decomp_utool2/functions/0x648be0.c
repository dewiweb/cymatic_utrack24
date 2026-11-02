// rea decompile_all
// name: FUN_00648be0
// address: 0x648be0
// body: available
// range: 0x648be0-0x648e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x648e6d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648e74 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648e7b to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648be0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int in_EDX;
  undefined4 extraout_EDX;
  uint uVar3;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  switch(param_3) {
  case 0:
    switch(param_2) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
switchD_00648c61_caseD_1:
      *(undefined1 *)(in_ECX + 0x10f) = 1;
      break;
    default:
      goto switchD_00648c04_caseD_1;
    }
    break;
  default:
    goto switchD_00648c04_caseD_1;
  case 2:
    if ((param_2 != 8) && (param_2 != 0x10)) goto switchD_00648c04_caseD_1;
    *(undefined1 *)(in_ECX + 0x10f) = 3;
    break;
  case 3:
    switch(param_2) {
    case 1:
    case 2:
    case 4:
    case 8:
      goto switchD_00648c61_caseD_1;
    default:
      goto switchD_00648c04_caseD_1;
    }
  case 4:
    if ((param_2 != 8) && (param_2 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    *(undefined1 *)(in_ECX + 0x10f) = 2;
    break;
  case 6:
    if ((param_2 != 8) && (param_2 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    *(undefined1 *)(in_ECX + 0x10f) = 4;
  }
  if (param_4 != 0) {
    FUN_006563b0();
    param_4 = 0;
  }
  if ((((((*(byte *)(in_ECX + 0x21c) & 4) == 0) || ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0)) ||
       ((param_3 != 2 && (param_3 != 6)))) || (param_5 != 0x40)) && (param_5 != 0)) {
    FUN_006563b0();
    param_5 = 0;
  }
  if ((param_6 != 0) && (param_6 != 1)) {
    FUN_006563b0();
    param_6 = 1;
  }
  *(char *)(in_ECX + 0x220) = (char)param_5;
  *(char *)(in_ECX + 0x234) = (char)param_4;
  *(int *)(in_ECX + 0xb4) = in_EDX;
  *(char *)(in_ECX + 0x10b) = (char)param_3;
  *(undefined4 *)(in_ECX + 0xb8) = param_1;
  uVar3 = (uint)*(byte *)(in_ECX + 0x10f) * (param_2 & 0xff);
  *(char *)(in_ECX + 0x10c) = (char)param_2;
  *(char *)(in_ECX + 0x108) = (char)param_6;
  *(byte *)(in_ECX + 0x10e) = (byte)uVar3;
  if ((byte)uVar3 < 8) {
    uVar2 = (uVar3 & 0xff) * in_EDX + 7 >> 3;
  }
  else {
    uVar2 = ((uVar3 & 0xff) >> 3) * in_EDX;
  }
  *(uint *)(in_ECX + 0xc4) = uVar2;
  *(int *)(in_ECX + 0xc0) = in_EDX;
  *(byte *)(in_ECX + 0x110) = *(byte *)(in_ECX + 0x10f);
  *(char *)(in_ECX + 0x10d) = (char)param_2;
  FUN_00649770(0xd);
  if (*(code **)(in_ECX + 0xc) != (code *)0x0) {
    (**(code **)(in_ECX + 0xc))();
    FUN_006598a0(0xd);
    FUN_006496e0();
    if (*(char *)(in_ECX + 0x10a) == '\0') {
      if ((*(char *)(in_ECX + 0x10b) == '\x03') || (*(byte *)(in_ECX + 0x10c) < 8)) {
        *(undefined1 *)(in_ECX + 0x10a) = 8;
      }
      else {
        *(undefined1 *)(in_ECX + 0x10a) = 0xf8;
      }
    }
    *(undefined4 *)(in_ECX + 0x28) = 1;
    __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar3);
    return;
  }
switchD_00648c04_caseD_1:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

