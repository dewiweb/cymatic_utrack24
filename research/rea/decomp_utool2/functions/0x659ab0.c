// rea decompile_all
// name: FUN_00659ab0
// address: 0x659ab0
// body: available
// range: 0x659ab0-0x659e86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659ab0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *_Memory;
  int in_ECX;
  undefined1 *extraout_ECX;
  undefined1 *puVar4;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int iVar5;
  undefined1 *puVar6;
  double dVar7;
  undefined4 uVar8;
  void *local_244;
  undefined4 local_240;
  undefined *local_23c;
  code *local_238;
  code *local_234;
  undefined4 local_230;
  void *local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined4 *local_210;
  void *local_20c;
  undefined8 local_208;
  code **local_200;
  int local_1fc;
  undefined4 local_1ec;
  void **local_1e8;
  int local_1e4;
  uint local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined1 local_14e;
  undefined4 local_148;
  undefined1 local_13c;
  undefined4 local_138;
  uint local_130;
  code *local_98;
  undefined *local_94;
  undefined *local_90;
  undefined *local_8c;
  undefined *local_88;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720185;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0x168;
  local_14 = uVar3;
  _memset(&local_200,0,0x168);
  FUN_00671bc0(uVar8,uVar3);
  _memset(&local_98,0,0x84);
  local_200 = &local_98;
  local_98 = FUN_0065a520;
  local_1e8 = &local_244;
  local_94 = &DAT_0065a500;
  local_90 = &DAT_0065a510;
  local_8c = &DAT_0065a4f0;
  local_88 = &DAT_0065a510;
  local_230 = param_2;
  _Memory = (void *)FUN_004c554b(0x200);
  local_8 = 0;
  iVar5 = *param_1;
  local_240 = 0x200;
  local_23c = &DAT_0065a460;
  local_238 = FUN_0065a400;
  local_234 = FUN_0065a430;
  if (iVar5 == 0) {
    local_1e4 = 0;
    local_1e0 = 0;
  }
  else {
    local_1e4 = *(int *)(iVar5 + 0xc);
    local_1e0 = *(uint *)(iVar5 + 0x10);
  }
  local_1dc = 3;
  local_1d8 = 2;
  local_13c = 1;
  local_138 = 0x480048;
  local_244 = _Memory;
  local_22c = _Memory;
  local_20c = _Memory;
  FUN_0066c550();
  local_148 = 2;
  local_14e = 1;
  if (*(float *)(in_ECX + 4) <= 0.0 && *(float *)(in_ECX + 4) != 0.0) {
    *(undefined4 *)(in_ECX + 4) = 0x3f59999a;
  }
  dVar7 = (double)(*(float *)(in_ECX + 4) * 100.0) + 6755399441055744.0;
  local_208._0_4_ = SUB84(dVar7,0);
  if ((int)local_208 < 0) {
LAB_00659c7a:
    local_208._0_4_ = 1;
  }
  else {
    if (100 < (int)local_208) {
      local_208._0_4_ = 100;
    }
    if ((int)local_208 < 1) goto LAB_00659c7a;
    if (100 < (int)local_208) {
      local_208._0_4_ = 100;
      iVar5 = 0;
      goto LAB_00659c89;
    }
    if (0x31 < (int)local_208) {
      iVar5 = (100 - (int)local_208) * 2;
      goto LAB_00659c89;
    }
  }
  iVar5 = (int)(5000 / (longlong)(int)local_208);
LAB_00659c89:
  iVar2 = (int)local_208;
  local_208 = dVar7;
  FUN_0066c8b0(&DAT_00c18630,iVar5,iVar2);
  FUN_0066c8b0(&DAT_00c182c0,iVar5);
  FUN_00671920();
  uVar8 = (**(code **)(local_1fc + 8))(&local_200,1,local_1dc * local_1e4,1);
  param_1 = (int *)*param_1;
  local_208 = (double)CONCAT44(uVar8,(int)local_208);
  if (param_1 == (int *)0x0) {
    local_218 = 0;
    local_214 = 0;
  }
  else {
    local_218 = param_1[3];
    local_214 = param_1[4];
  }
  local_210 = (undefined4 *)0x0;
  local_8._0_1_ = 1;
  (**(code **)(*param_1 + 0x10))(&local_228,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_130 < local_1e0) {
    puVar1 = local_208._4_4_;
    puVar4 = extraout_ECX;
    do {
      if (local_224 == 1) {
        puVar4 = (undefined1 *)(local_220 * local_130 + local_228);
        puVar6 = (undefined1 *)*puVar1;
        iVar5 = local_218;
        while (iVar5 = iVar5 + -1, -1 < iVar5) {
          *puVar6 = puVar4[2];
          puVar6[1] = puVar4[1];
          puVar6[2] = *puVar4;
          puVar4 = puVar4 + local_21c;
          puVar6 = puVar6 + 3;
        }
      }
      else {
        iVar5 = 0;
        puVar6 = (undefined1 *)*puVar1;
        if (0 < local_218) {
          do {
            FUN_006730b0((int)&local_208 + 4,iVar5,local_130);
            *puVar6 = local_208._6_1_;
            iVar5 = iVar5 + 1;
            puVar6[1] = (char)((ulonglong)local_208 >> 0x28);
            puVar6[2] = (char)((ulonglong)local_208 >> 0x20);
            puVar4 = extraout_ECX_01;
            puVar6 = puVar6 + 3;
          } while (iVar5 < local_218);
        }
      }
      FUN_00671850(puVar4);
      puVar4 = extraout_ECX_00;
      _Memory = local_20c;
    } while (local_130 < local_1e0);
  }
  FUN_00671990();
  if (local_1fc != 0) {
    (**(code **)(local_1fc + 0x28))(&local_200);
  }
  local_1fc = 0;
  local_1ec = 0;
  if (local_210 != (undefined4 *)0x0) {
    (**(code **)*local_210)(1);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

