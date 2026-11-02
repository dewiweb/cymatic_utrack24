// rea decompile_all
// name: FUN_004e60c0
// address: 0x4e60c0
// body: available
// range: 0x4e60c0-0x4e62b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e60c0(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  double in_XMM1_Qa;
  double dVar6;
  double dVar7;
  undefined1 auStack_84 [4];
  double local_80;
  double local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_84;
  local_70 = 0xc0000000;
  uStack_6c = 0x3fdccccc;
  uStack_68._0_4_ = 0xc0000000;
  uStack_68._4_4_ = 0x3ff4cccc;
  local_60 = 0;
  uStack_5c = 0x3fe00000;
  uStack_58 = 0xa0000000;
  uStack_54 = 0x3ff19999;
  dVar7 = ABS(in_XMM1_Qa - 0.44999998807907104);
  local_50 = 0xc0000000;
  uStack_4c = 0x3feccccc;
  uStack_48 = 0x60000000;
  uStack_44 = 0x3fe66666;
  local_40 = 0xe0000000;
  uStack_3c = 0x3ff170a3;
  uStack_38 = 0xa0000000;
  uStack_34 = 0x3fe99999;
  local_30 = 0;
  uStack_2c = 0x40000000;
  uStack_28 = 0xc0000000;
  uStack_24 = 0x3feccccc;
  local_20 = 0xe0000000;
  uStack_1c = 0x400170a3;
  uStack_18 = 0xa0000000;
  uStack_14 = 0x3ff19999;
  dVar6 = in_XMM1_Qa - 0.5;
  bVar1 = dVar7 != ABS(dVar6);
  bVar2 = ABS(dVar6) <= dVar7;
  if (bVar2 && bVar1) {
    dVar7 = ABS(dVar6);
  }
  uVar3 = (uint)(bVar2 && bVar1);
  dVar6 = in_XMM1_Qa - 0.8999999761581421;
  if (ABS(dVar6) <= dVar7 && dVar7 != ABS(dVar6)) {
    uVar3 = 2;
    dVar7 = ABS(dVar6);
  }
  dVar6 = in_XMM1_Qa - 1.090000033378601;
  if (ABS(dVar6) <= dVar7 && dVar7 != ABS(dVar6)) {
    uVar3 = 3;
    dVar7 = ABS(dVar6);
  }
  dVar6 = in_XMM1_Qa - 2.0;
  if (ABS(dVar6) <= dVar7 && dVar7 != ABS(dVar6)) {
    uVar3 = 4;
    dVar7 = ABS(dVar6);
  }
  if (ABS(in_XMM1_Qa - 2.180000066757202) <= dVar7 && dVar7 != ABS(in_XMM1_Qa - 2.180000066757202))
  {
    uVar3 = 5;
  }
  if (in_XMM1_Qa <= 1.0) {
    dVar6 = (double)(&uStack_68)[uVar3 * 2] * in_XMM1_Qa;
  }
  else {
    dVar6 = (double)(&uStack_68)[uVar3 * 2] / in_XMM1_Qa;
  }
  if (dVar6 <= 0.001) {
    dVar6 = 0.001;
  }
  dVar6 = dVar6 * 3.141592653589793;
  FUN_006f9520();
  local_80 = 1.0 / dVar6;
  local_78 = local_80 * local_80;
  uVar4 = 0;
  uVar5 = 0x40000000;
  __libm_sse2_sqrt_precise();
  dVar7 = (double)CONCAT44(uVar5,uVar4) * local_80;
  *(undefined8 *)(in_ECX + 0xe0) = 0x3ff0000000000000;
  dVar6 = 1.0 / (dVar7 + 1.0 + local_78);
  *(double *)(in_ECX + 200) = dVar6;
  *(double *)(in_ECX + 0xd8) = dVar6;
  *(double *)(in_ECX + 0xf0) = ((1.0 - dVar7) + local_78) * dVar6;
  *(double *)(in_ECX + 0xd0) = dVar6 + dVar6;
  *(double *)(in_ECX + 0xe8) = (1.0 - local_78) * (dVar6 + dVar6);
  __security_check_cookie(local_c ^ (uint)auStack_84);
  return;
}

