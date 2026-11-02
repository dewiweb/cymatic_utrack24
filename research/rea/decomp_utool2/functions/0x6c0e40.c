// rea decompile_all
// name: FUN_006c0e40
// address: 0x6c0e40
// body: available
// range: 0x6c0e40-0x6c12f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006c1140) */
/* WARNING: Removing unreachable block (ram,0x006c1156) */
/* WARNING: Removing unreachable block (ram,0x006c115e) */
/* WARNING: Removing unreachable block (ram,0x006c117c) */
/* WARNING: Removing unreachable block (ram,0x006c1248) */
/* WARNING: Removing unreachable block (ram,0x006c1253) */
/* WARNING: Removing unreachable block (ram,0x006c1261) */
/* WARNING: Removing unreachable block (ram,0x006c1269) */

void FUN_006c0e40(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  void *local_54;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  float local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007253cf;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = 0;
  uVar7 = 0;
  local_20 = 0;
  local_1c = 0.0;
  local_30 = 0.0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_14 = uVar1;
  FUN_0069e390(&local_30,param_1);
  FUN_0069ee40(param_1);
  fVar3 = (float)(double)CONCAT44(uVar7,uVar2);
  fVar4 = fVar3;
  FUN_0069ee40(param_1);
  fVar5 = (float)(double)CONCAT44(uVar7,fVar4);
  fVar4 = local_30;
  FUN_0046fd00(uVar1);
  fVar6 = local_1c;
  FUN_0046fd00();
  local_54 = (void *)0x0;
  local_8 = 0;
  if ((fVar3 <= 0.0) || (fVar5 <= 0.0)) {
    FUN_00682020(fVar6);
  }
  else {
    fVar8 = fVar4 * 0.5;
    if (fVar3 <= fVar4 * 0.5) {
      fVar8 = fVar3;
    }
    fVar3 = fVar6 * 0.5;
    if (fVar5 <= fVar6 * 0.5) {
      fVar3 = fVar5;
    }
    fVar5 = fVar6 + 0.0;
    FUN_00682e50();
    FUN_0067c020(0,fVar8 + 0.0,0);
    FUN_00682d90();
    FUN_0067c020(fVar3 * 0.45 + 0.0,fVar4 + 0.0,fVar3 + 0.0);
    FUN_00682d90();
    FUN_0067c020(fVar5,(fVar4 + 0.0) - fVar8,fVar5);
    FUN_00682d90();
    FUN_0067c020(fVar5 - fVar3 * 0.45,0,fVar5 - fVar3);
  }
  uVar2 = FUN_0067fb40(uStack_2c,fVar4,0,uStack_28,uStack_24,0,fVar6,local_20,local_1c);
  FUN_00680060(uVar2);
  if ((*(int *)(in_ECX + 0x98) != 0) || (*(char *)(in_ECX + 0xac) != '\x01')) {
    local_54 = *(void **)(in_ECX + 0x90);
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(undefined4 *)(in_ECX + 0x94) = 0;
    *(undefined4 *)(in_ECX + 0x98) = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    *(undefined4 *)(in_ECX + 0xa8) = 0;
    *(undefined1 *)(in_ECX + 0xac) = 1;
    FUN_006bfb60();
  }
  FID_conflict__free(local_54);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

