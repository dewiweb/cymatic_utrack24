// rea decompile_all
// name: FUN_005bf150
// address: 0x5bf150
// body: available
// range: 0x5bf150-0x5bf373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bf150(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  undefined4 in_XMM0_Da;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  pbVar3 = param_1;
  if (4 < iVar4) {
    pbVar3 = *(byte **)param_1;
  }
  if ((*pbVar3 & 0xf0) == 0xf0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*pbVar3 & 0xf) + 1;
  }
  pbVar3 = param_1;
  if (4 < iVar4) {
    pbVar3 = *(byte **)param_1;
  }
  if (((*pbVar3 & 0xf0) == 0x90) && (pbVar3[2] != 0)) {
    pbVar3 = param_1;
    if (4 < iVar4) {
      pbVar3 = *(byte **)param_1;
    }
    if (((*pbVar3 & 0xf0) == 0x90) || ((*pbVar3 & 0xf0) == 0x80)) {
      pbVar3 = param_1;
      if (4 < iVar4) {
        pbVar3 = *(byte **)param_1;
      }
      bVar1 = pbVar3[2];
    }
    else {
      bVar1 = 0;
    }
    if (4 < iVar4) {
      param_1 = *(byte **)param_1;
    }
    (**(code **)(*in_ECX + 4))(iVar6,param_1[1],(float)bVar1 * 0.007874016);
    return;
  }
  pbVar3 = param_1;
  if (4 < iVar4) {
    pbVar3 = *(byte **)param_1;
  }
  if (((*pbVar3 & 0xf0) == 0x80) || ((pbVar3[2] == 0 && ((*pbVar3 & 0xf0) == 0x90)))) {
    if (4 < iVar4) {
      param_1 = *(byte **)param_1;
    }
    iVar4 = *in_ECX;
    FUN_005c5340(1);
    (**(code **)(iVar4 + 8))(iVar6,param_1[1],in_XMM0_Da);
    return;
  }
  pbVar3 = param_1;
  if (4 < iVar4) {
    pbVar3 = *(byte **)param_1;
  }
  if (((*pbVar3 & 0xf0) != 0xb0) || (pbVar3[1] != 0x7b)) {
    pbVar3 = param_1;
    if (4 < iVar4) {
      pbVar3 = *(byte **)param_1;
    }
    if (((*pbVar3 & 0xf0) != 0xb0) || (pbVar3[1] != 0x78)) {
      pbVar3 = param_1;
      if (4 < iVar4) {
        pbVar3 = *(byte **)param_1;
      }
      if ((*pbVar3 & 0xf0) == 0xe0) {
        iVar4 = FUN_005c51e0();
        in_ECX[iVar6 + 0xd] = iVar4;
        (**(code **)(*in_ECX + 0x10))(iVar6,iVar4);
        return;
      }
      if (4 < iVar4) {
        param_1 = *(byte **)param_1;
      }
      if ((*param_1 & 0xf0) == 0xa0) {
        uVar5 = FUN_005c5300();
        uVar7 = FUN_005c53e0(uVar5);
        (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x18))(iVar6,(int)uVar7);
        return;
      }
      cVar2 = FUN_005c52e0();
      if (cVar2 != '\0') {
        uVar7 = FUN_005c52c0();
        (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x1c))(iVar6,(int)uVar7);
        return;
      }
      cVar2 = FUN_005c51c0();
      if (cVar2 == '\0') {
        cVar2 = FUN_005c5240();
        if (cVar2 == '\0') {
          return;
        }
        uVar7 = FUN_005c5220();
        (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x2c))(iVar6,(int)uVar7);
        return;
      }
      uVar5 = FUN_005c5150();
      uVar7 = FUN_005c5170(uVar5);
      (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x14))(iVar6,(int)uVar7);
      return;
    }
  }
  (**(code **)(*in_ECX + 0xc))(iVar6,1);
  return;
}

