// rea decompile_all
// name: FUN_0041ea85
// address: 0x41ea85
// body: available
// range: 0x41ea85-0x41ed75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0041ea85(ushort param_1,uint param_2,int param_3)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int *local_8;
  
  local_8 = (int *)(*(int *)(in_EAX + 0x84) + (param_2 & 0xffff) * 8);
  piVar9 = (int *)(*(int *)(in_EAX + 0x84) + (uint)param_1 * 8);
  bVar4 = (byte)*(undefined4 *)(in_EAX + 0x18);
  iVar2 = (*piVar9 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
  local_14 = (piVar9[1] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
  iVar3 = (*local_8 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
  iVar7 = (local_8[1] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
  iVar6 = iVar3;
  local_18 = iVar2;
  if (param_3 != 0) {
    iVar6 = iVar7;
    iVar7 = iVar3;
    local_18 = local_14;
    local_14 = iVar2;
  }
  pbVar5 = (byte *)(*(int *)(in_EAX + 0x88) + (uint)param_1);
  if ((*pbVar5 & 4) != 0) {
    *(byte *)(in_EAX + 0xb4) = *pbVar5 >> 5;
  }
  if ((*pbVar5 & 3) == 2) {
LAB_0041ed52:
    *(undefined4 *)(in_EAX + 0x2c) = 0x14;
  }
  else {
    if ((*pbVar5 & 3) == 0) {
      if ((*(byte *)(*(int *)(in_EAX + 0x88) + (param_2 & 0xffff)) & 3) == 1) {
        local_8 = local_8 + -2;
        local_18 = iVar6;
        local_14 = iVar7;
      }
      else {
        local_18 = (iVar6 + local_18) / 2;
        local_14 = (local_14 + iVar7) / 2;
      }
      piVar9 = piVar9 + -2;
      pbVar5 = pbVar5 + -1;
    }
    *(int *)(in_EAX + 0x44) = local_18;
    *(int *)(in_EAX + 0x48) = local_14;
    do {
      if (local_8 <= piVar9) {
        cVar1 = FUN_0041e6b8(local_18);
LAB_0041ed6d:
        if (cVar1 != '\0') {
          return 1;
        }
        return 0;
      }
      piVar10 = piVar9 + 2;
      _param_1 = pbVar5 + 1;
      if ((*_param_1 & 3) == 0) {
        bVar4 = (byte)*(undefined4 *)(in_EAX + 0x18);
        iVar6 = (*piVar10 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        local_20 = (piVar9[3] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        piVar9 = piVar10;
        local_1c = iVar6;
        if (param_3 == 0) goto LAB_0041ec9a;
        while( true ) {
          piVar9 = piVar10;
          iVar6 = local_20;
          local_20 = local_1c;
LAB_0041ec9a:
          local_1c = local_20;
          local_20 = iVar6;
          if (local_8 <= piVar9) {
            cVar1 = FUN_0041e7d0(local_20,local_1c,local_18,local_14);
            goto LAB_0041ed6d;
          }
          piVar10 = piVar9 + 2;
          _param_1 = _param_1 + 1;
          bVar4 = (byte)*(undefined4 *)(in_EAX + 0x18);
          iVar2 = (piVar9[3] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar7 = (*piVar10 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar6 = iVar2;
          if (param_3 != 0) {
            iVar6 = iVar7;
            iVar7 = iVar2;
          }
          if ((*_param_1 & 3) == 1) break;
          if ((*_param_1 & 3) != 0) goto LAB_0041ed52;
          cVar1 = FUN_0041e7d0(local_20,local_1c,(local_20 + iVar7) / 2,(iVar6 + local_1c) / 2);
          local_20 = iVar7;
          local_1c = iVar6;
          if (cVar1 != '\0') {
            return 1;
          }
        }
        cVar1 = FUN_0041e7d0(local_20,local_1c,iVar7,iVar6);
      }
      else if ((*_param_1 & 3) == 1) {
        bVar4 = (byte)*(undefined4 *)(in_EAX + 0x18);
        iVar6 = (*piVar10 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        if (param_3 != 0) {
          iVar6 = (piVar9[3] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        }
        cVar1 = FUN_0041e6b8(iVar6);
      }
      else {
        if ((local_8 < piVar9 + 4) || ((pbVar5[2] & 3) != 2)) goto LAB_0041ed52;
        iVar6 = *piVar10;
        piVar10 = piVar9 + 6;
        _param_1 = pbVar5 + 3;
        bVar4 = (byte)*(undefined4 *)(in_EAX + 0x18);
        param_2 = (piVar9[4] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar3 = (iVar6 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar8 = (piVar9[5] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar7 = (piVar9[3] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar6 = iVar3;
        iVar2 = iVar8;
        if (param_3 != 0) {
          iVar6 = iVar7;
          iVar7 = iVar3;
          iVar2 = param_2;
          param_2 = iVar8;
        }
        if (local_8 < piVar10) {
          cVar1 = FUN_0041e916(iVar6,iVar7,param_2,iVar2,local_18,local_14);
          goto LAB_0041ed6d;
        }
        bVar4 = (byte)*(undefined4 *)(in_EAX + 0x18);
        local_c = (*piVar10 << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar8 = (piVar9[7] << (bVar4 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar3 = iVar8;
        if (param_3 != 0) {
          iVar3 = local_c;
          local_c = iVar8;
        }
        cVar1 = FUN_0041e916(iVar6,iVar7,param_2,iVar2,local_c,iVar3);
      }
      pbVar5 = _param_1;
      piVar9 = piVar10;
    } while (cVar1 == '\0');
  }
  return 1;
}

