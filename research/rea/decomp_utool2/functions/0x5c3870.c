// rea decompile_all
// name: FUN_005c3870
// address: 0x5c3870
// body: available
// range: 0x5c3870-0x5c3a44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c3870(byte *param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int *in_ECX;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  pbVar3 = param_1;
  if (4 < iVar1) {
    pbVar3 = *(byte **)param_1;
  }
  switch(pbVar3[1]) {
  case 0x40:
    if (4 < iVar1) {
      param_1 = *(byte **)param_1;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (*param_1 & 0xf) + 1;
    }
    iVar1 = *in_ECX;
    uVar2 = FUN_005c5290();
    (**(code **)(iVar1 + 0x1c))(cVar4,uVar2);
    return;
  case 0x41:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
    return;
  case 0x42:
    if (4 < iVar1) {
      param_1 = *(byte **)param_1;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (*param_1 & 0xf) + 1;
    }
    iVar1 = *in_ECX;
    uVar2 = FUN_005c5260();
    (**(code **)(iVar1 + 0x20))(cVar4,uVar2);
    return;
  case 0x46:
    break;
  case 0x4a:
    pbVar3 = param_1;
    if (4 < iVar1) {
      pbVar3 = *(byte **)param_1;
    }
    if (4 < iVar1) {
      param_1 = *(byte **)param_1;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      FUN_005c3580(0,pbVar3[2]);
      return;
    }
    FUN_005c3580((*param_1 & 0xf) + 1,pbVar3[2]);
    return;
  case 0x66:
    pbVar3 = param_1;
    if (4 < iVar1) {
      pbVar3 = *(byte **)param_1;
    }
    if (4 < iVar1) {
      param_1 = *(byte **)param_1;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      *(byte *)((int)in_ECX + 0x9b) = pbVar3[2];
      return;
    }
    *(byte *)((*param_1 & 0xf) + 0x9c + (int)in_ECX) = pbVar3[2];
    return;
  case 0x6a:
    pbVar3 = param_1;
    if (4 < iVar1) {
      pbVar3 = *(byte **)param_1;
    }
    if (4 < iVar1) {
      param_1 = *(byte **)param_1;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      *(byte *)((int)in_ECX + 0xab) = pbVar3[2];
      return;
    }
    *(byte *)((*param_1 & 0xf) + 0xac + (int)in_ECX) = pbVar3[2];
    return;
  default:
    return;
  }
  pbVar3 = param_1;
  if (4 < iVar1) {
    pbVar3 = *(byte **)param_1;
  }
  if (4 < iVar1) {
    param_1 = *(byte **)param_1;
  }
  if ((*param_1 & 0xf0) == 0xf0) {
    FUN_005c3640(0,pbVar3[2]);
    return;
  }
  FUN_005c3640((*param_1 & 0xf) + 1,pbVar3[2]);
  return;
}

