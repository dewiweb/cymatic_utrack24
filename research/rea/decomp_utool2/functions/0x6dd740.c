// rea decompile_all
// name: FUN_006dd740
// address: 0x6dd740
// body: available
// range: 0x6dd740-0x6ddba5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dd740(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  void *local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00727d5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_74 = (void *)0x0;
  iVar2 = param_5;
  if (param_6 < param_5) {
    iVar2 = param_6;
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 1;
  fVar6 = (float)iVar2 * 0.4;
  local_14 = fVar6 * 0.15;
  local_8 = 0;
  local_34 = local_14 * 0.5;
  local_28 = fVar6 * 0.4;
  local_1c = fVar6 * 0.6 * 0.5;
  local_18 = local_14 * -0.5;
  if (local_34 <= local_1c) {
    local_1c = local_34;
  }
  local_20 = local_1c * 0.45;
  fVar6 = local_28 + fVar6 * 0.6;
  local_24 = local_34 * 0.45;
  local_14 = local_18 + local_14;
  local_2c = local_34 + local_18;
  FUN_00682e50();
  local_38 = local_1c + local_28;
  local_30 = local_24 + local_18;
  local_3c = local_20 + local_28;
  FUN_0067c020(local_18,local_38);
  local_1c = fVar6 - local_1c;
  FUN_00682d90();
  local_20 = fVar6 - local_20;
  FUN_0067c020(local_30,fVar6);
  local_34 = local_14 - local_34;
  FUN_00682d90();
  local_30 = local_14 - local_24;
  FUN_0067c020(local_14,local_1c);
  FUN_00682d90();
  FUN_0067c020(local_30,local_28);
  if ((local_6c != 0) && (*(float *)((int)local_74 + local_6c * 4 + -4) != 100005.0)) {
    if (local_70 < local_6c + 1) {
      FUN_00409cf0();
    }
    *(undefined4 *)((int)local_74 + local_6c * 4) = 0x47c35280;
    local_6c = local_6c + 1;
  }
  DVar3 = timeGetTime();
  if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar3;
  }
  uVar4 = 0;
  local_3c = (float)(0xc - (int)(((ulonglong)DVar3 / 100) % 0xc));
  do {
    FUN_00684d10(&stack0xffffff7c);
    FUN_00684c50();
    fVar5 = (float)((double)(int)uVar4 + (double)(&DAT_00c24bb0)[-((int)uVar4 >> 0x1f)]) * 0.5235988
    ;
    fVar6 = fVar5;
    FUN_004363f0();
    FUN_00436470();
    local_50 = -fVar5;
    local_54 = fVar6;
    local_4c = (float)param_5 * 0.5 + (float)param_3 + 0.0;
    local_48 = fVar5;
    local_44 = fVar6;
    local_40 = (float)param_6 * 0.5 + (float)param_4 + 0.0;
    cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_74);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  FID_conflict__free(local_74);
  ExceptionList = local_10;
  return;
}

