// rea decompile_all
// name: FUN_004b7010
// address: 0x4b7010
// body: available
// range: 0x4b7010-0x4b71b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b7010(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  FUN_006f2f70();
  iVar1 = FUN_006f2ff0();
  switch(iVar1) {
  case 0:
    return 0;
  default:
    iVar2 = FID_conflict__iswalpha((wint_t)iVar1);
    if (((iVar2 == 0) && (iVar1 != 0x5f)) && (iVar1 != 0x40)) {
      FUN_006f30b0();
      return 0;
    }
    iVar1 = FUN_004b72f0();
    return iVar1;
  case 0x21:
  case 0x25:
  case 0x2a:
  case 0x3d:
switchD_004b703a_caseD_21:
    FUN_006f30b0();
    break;
  case 0x22:
  case 0x27:
    FUN_004b7270();
    return 7;
  case 0x23:
    FUN_004b7740();
    return 10;
  case 0x26:
  case 0x3c:
  case 0x3e:
  case 0x5e:
  case 0x7c:
    FUN_006f30b0();
    iVar2 = FUN_006f2ff0();
    if (iVar2 == iVar1) goto switchD_004b703a_caseD_21;
    break;
  case 0x28:
  case 0x29:
  case 0x5b:
  case 0x5d:
  case 0x7b:
  case 0x7d:
    FUN_006f30b0();
    return 8;
  case 0x2b:
    FUN_006f30b0();
    FUN_004b76b0(extraout_ECX);
    return 3;
  case 0x2c:
  case 0x3a:
  case 0x3b:
    FUN_006f30b0();
    return 9;
  case 0x2d:
    FUN_006f30b0();
    iVar1 = FUN_004b7600();
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_004b76b0(extraout_ECX_00);
    return 3;
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar2 = FUN_004b7600();
    if ((iVar2 == 0) && (FUN_006f30b0(), iVar1 == 0x2e)) {
      return 9;
    }
    return iVar2;
  case 0x2f:
    FUN_006f30b0();
    iVar1 = FUN_006f2ff0();
    if (iVar1 == 0x2f) {
      FUN_006f3060();
      return 1;
    }
    if (iVar1 == 0x2a) {
      FUN_006f30b0();
      FUN_004b76d0();
      return 1;
    }
    goto LAB_004b7154;
  case 0x3f:
  case 0x7e:
    goto switchD_004b703a_caseD_3f;
  }
  iVar1 = FUN_006f2ff0();
LAB_004b7154:
  if (iVar1 == 0x3d) {
switchD_004b703a_caseD_3f:
    FUN_006f30b0();
  }
  return 3;
}

