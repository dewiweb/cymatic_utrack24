// rea decompile_all
// name: FUN_00657c00
// address: 0x657c00
// body: available
// range: 0x657c00-0x657f02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00657c00(undefined4 param_1,uint param_2,undefined1 *param_3,byte param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]);
  if (uVar2 != param_2) {
    pcVar5 = "length does not match profile";
LAB_00657eee:
    uVar1 = FUN_006580d0(param_1,uVar2,pcVar5);
    return uVar1;
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_3[0x80],param_3[0x81]),param_3[0x82]),param_3[0x83]);
  if ((0x1555554a < uVar2) || (param_2 < (uVar2 + 0xb) * 0xc)) {
    pcVar5 = "tag count too large";
    goto LAB_00657eee;
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_3[0x40],param_3[0x41]),param_3[0x42]),param_3[0x43]);
  if (0xfffe < uVar2) {
    pcVar5 = "invalid rendering intent";
    goto LAB_00657eee;
  }
  if (3 < uVar2) {
    FUN_006580d0(param_1,uVar2,"intent outside defined range");
  }
  iVar3 = CONCAT31(CONCAT21(CONCAT11(param_3[0x24],param_3[0x25]),param_3[0x26]),param_3[0x27]);
  if (iVar3 != 0x61637370) {
    uVar1 = FUN_006580d0(param_1,iVar3,"invalid signature");
    return uVar1;
  }
  if (((*(int *)(param_3 + 0x44) != -0x290a0000) || (*(int *)(param_3 + 0x48) != 0x100)) ||
     (*(int *)(param_3 + 0x4c) != 0x2dd30000)) {
    FUN_006580d0(param_1,0,"PCS illuminant is not D50");
  }
  iVar3 = CONCAT31(CONCAT21(CONCAT11(param_3[0x10],param_3[0x11]),param_3[0x12]),param_3[0x13]);
  if (iVar3 == 0x47524159) {
    if ((param_4 & 2) != 0) {
      uVar1 = FUN_006580d0(param_1,0x47524159,"Gray color space not permitted on RGB PNG");
      return uVar1;
    }
  }
  else {
    if (iVar3 != 0x52474220) {
      uVar1 = FUN_006580d0(param_1,iVar3,"invalid ICC profile color space");
      return uVar1;
    }
    if ((param_4 & 2) == 0) {
      uVar1 = FUN_006580d0(param_1,0x52474220,"RGB color space not permitted on grayscale PNG");
      return uVar1;
    }
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]),param_3[0xf]);
  if (uVar2 < 0x6e6d636d) {
    if (uVar2 != 0x6e6d636c) {
      if (uVar2 == 0x61627374) {
        uVar1 = FUN_006580d0(param_1,0x61627374,"invalid embedded Abstract ICC profile");
        return uVar1;
      }
      if (uVar2 == 0x6c696e6b) {
        uVar1 = FUN_006580d0(param_1,0x6c696e6b,"unexpected DeviceLink ICC profile class");
        return uVar1;
      }
      bVar4 = uVar2 == 0x6d6e7472;
      goto LAB_00657e7e;
    }
    pcVar5 = "unexpected NamedColor ICC profile class";
    uVar2 = 0x6e6d636c;
  }
  else {
    if ((uVar2 == 0x70727472) || (uVar2 == 0x73636e72)) goto LAB_00657e93;
    bVar4 = uVar2 == 0x73706163;
LAB_00657e7e:
    if (bVar4) goto LAB_00657e93;
    pcVar5 = "unrecognized ICC profile class";
  }
  FUN_006580d0(param_1,uVar2,pcVar5);
LAB_00657e93:
  iVar3 = CONCAT31(CONCAT21(CONCAT11(param_3[0x14],param_3[0x15]),param_3[0x16]),param_3[0x17]);
  if ((iVar3 != 0x4c616220) && (iVar3 != 0x58595a20)) {
    uVar1 = FUN_006580d0(param_1,iVar3,"unexpected ICC PCS encoding");
    return uVar1;
  }
  return 1;
}

