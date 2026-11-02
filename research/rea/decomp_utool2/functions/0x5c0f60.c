// rea decompile_all
// name: FUN_005c0f60
// address: 0x5c0f60
// body: available
// range: 0x5c0f60-0x5c1305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c0f60(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar6;
  int *in_ECX;
  longlong lVar7;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  LPCRITICAL_SECTION local_44;
  undefined8 local_40;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  uint uStack_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  code *pcVar5;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a589;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (LPCRITICAL_SECTION)(in_ECX + 0x31);
  EnterCriticalSection(local_44);
  local_8 = 0;
  pcVar5 = *(code **)(*in_ECX + 0x1c);
  if (pcVar5 == FUN_00424fc0) {
    pcVar5 = *(code **)(*(int *)in_ECX[6] + 0x1c);
  }
  cVar2 = (*pcVar5)(uVar4);
  if ((char)in_ECX[0x40] != cVar2) {
    pcVar5 = *(code **)(*in_ECX + 0x1c);
    if (pcVar5 == FUN_00424fc0) {
      pcVar5 = *(code **)(*(int *)in_ECX[6] + 0x1c);
    }
    uVar3 = (*pcVar5)();
    *(undefined1 *)(in_ECX + 0x40) = uVar3;
    in_ECX[0x38] = 0;
    in_ECX[0x39] = 0;
    in_ECX[0x3a] = 0;
    in_ECX[0x3b] = 0;
  }
  local_2c = in_ECX[0x3c];
  local_30 = in_ECX[0x3d];
  if ((local_30 < 0) || ((local_30 < 1 && (local_2c == 0)))) {
    local_30 = 0;
    local_2c = 0;
  }
  uVar4 = in_ECX[0xc];
  local_40 = 0;
  local_28 = in_ECX[0x38];
  local_34 = (uVar4 + local_2c) - 4;
  local_38 = (((int)uVar4 >> 0x1f) + local_30 + (uint)CARRY4(uVar4,local_2c)) -
             (uint)(uVar4 + local_2c < 4);
  if ((in_ECX[0x39] <= local_30) && ((in_ECX[0x39] < local_30 || (local_28 <= local_2c)))) {
    local_28 = in_ECX[0x3a];
    if ((local_30 <= in_ECX[0x3b]) && ((local_30 < in_ECX[0x3b] || (local_2c < local_28)))) {
      uVar4 = (int)(local_2c - in_ECX[0x38]) >> 0x1f;
      if (((int)((local_2c - in_ECX[0x38] ^ uVar4) - uVar4) < 0x201) &&
         (uVar4 = (int)(local_34 - in_ECX[0x3a]) >> 0x1f,
         (int)((local_34 - in_ECX[0x3a] ^ uVar4) - uVar4) < 0x201)) {
        local_20 = 0;
        local_14 = 0;
        local_24 = 0;
        uStack_18 = 0;
      }
      else {
        uVar4 = in_ECX[0x3a] + 0x800;
        iVar6 = in_ECX[0x3b] + (uint)(0xfffff7ff < (uint)in_ECX[0x3a]);
        if ((iVar6 <= local_38) && ((iVar6 < local_38 || (uVar4 < local_34)))) {
          local_38 = iVar6;
          local_34 = uVar4;
        }
        local_20 = in_ECX[0x3a];
        local_14 = in_ECX[0x3b];
        in_ECX[0x38] = local_2c;
        in_ECX[0x39] = local_30;
        uVar4 = in_ECX[0x3a];
        iVar6 = in_ECX[0x3b];
        if ((local_38 <= iVar6) && ((local_38 < iVar6 || (local_34 < uVar4)))) {
          uVar4 = local_34;
          iVar6 = local_38;
        }
        in_ECX[0x3a] = uVar4;
        in_ECX[0x3b] = iVar6;
        local_24 = local_38;
        uStack_18 = local_34;
      }
      goto LAB_005c11d5;
    }
  }
  iVar6 = local_30 + (uint)(0xfffff7ff < local_2c);
  if ((iVar6 <= local_38) && ((iVar6 < local_38 || (local_2c + 0x800 < local_34)))) {
    local_38 = iVar6;
    local_34 = local_2c + 0x800;
  }
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  local_14 = local_30;
  in_ECX[0x3b] = 0;
  local_24 = local_38;
  local_20 = local_2c;
  uStack_18 = local_34;
LAB_005c11d5:
  iVar6 = local_14;
  uVar4 = uStack_18;
  local_1c = 0;
  local_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x31));
  if ((local_20 == uVar4) && (iVar6 == local_24)) {
    ExceptionList = local_10;
    return 0;
  }
  uVar4 = in_ECX[0xc];
  local_28 = uVar4;
  iVar6 = __allrem(local_20,local_14,uVar4,(int)uVar4 >> 0x1f);
  uVar1 = uStack_18;
  local_40._4_4_ = iVar6;
  iVar6 = __allrem(uStack_18,local_24,uVar4,(int)uVar4 >> 0x1f);
  uVar4 = local_20;
  if (local_40._4_4_ < iVar6) {
    FUN_005c0f10(local_20,local_14,uVar1 - local_20,local_40._4_4_);
  }
  else {
    local_28 = local_28 - local_40._4_4_;
    FUN_005c0f10(local_20,local_14,local_28,local_40._4_4_);
    local_20 = local_28 + uVar4;
    local_24 = ((int)local_28 >> 0x1f) + local_14 + (uint)CARRY4(local_28,uVar4);
    lVar7 = (**(code **)(*(int *)in_ECX[6] + 0x14))();
    if (lVar7 != CONCAT44(local_24,local_20)) {
      (**(code **)(*(int *)in_ECX[6] + 0x10))(local_20,local_24);
    }
    local_50 = in_ECX + 0xb;
    local_48 = (uVar1 - uVar4) - local_28;
    local_4c = 0;
    (**(code **)(*(int *)in_ECX[6] + 0xc))(&local_50);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x31));
  in_ECX[0x38] = local_2c;
  in_ECX[0x39] = local_30;
  in_ECX[0x3a] = local_34;
  in_ECX[0x3b] = local_38;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x31));
  ExceptionList = local_10;
  return 1;
}

