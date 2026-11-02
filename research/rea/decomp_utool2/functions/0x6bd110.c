// rea decompile_all
// name: FUN_006bd110
// address: 0x6bd110
// body: available
// range: 0x6bd110-0x6bd2a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bd110(undefined4 param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  float *pfStack_38;
  float *pfStack_34;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  
  pfStack_34 = (float *)param_1;
  pfVar2 = (float *)(in_ECX + 0x26);
  uStack_3c = 0x6bd12e;
  pfStack_38 = pfVar2;
  FUN_0069e390();
  local_18 = in_ECX[0x28];
  local_14 = in_ECX[0x29];
  fVar5 = *pfVar2;
  local_1c = (float)in_ECX[0x27];
  pfStack_34 = (float *)0x6bd163;
  local_20 = fVar5;
  FUN_0046fd00();
  local_18 = in_ECX[0x2a];
  local_14 = in_ECX[0x2b];
  local_20 = *pfVar2;
  fVar7 = (float)in_ECX[0x27];
  pfStack_34 = (float *)0x6bd19d;
  local_1c = fVar7;
  local_10 = fVar5;
  FUN_0046fd00();
  fVar5 = 0.01;
  uVar6 = 0;
  if (fVar7 <= 0.01) {
    fVar7 = 0.01;
  }
  local_c = 0.01;
  pfStack_34 = (float *)param_1;
  pfStack_38 = (float *)0x6bd1c2;
  FUN_0069ee40();
  fVar8 = (float)(double)CONCAT44(uVar6,fVar5);
  if ((0.01 <= fVar8) && (uVar6 = 0, fVar5 = fVar7, fVar8 <= fVar7)) {
    fVar5 = fVar8;
  }
  pfStack_34 = (float *)param_1;
  pfStack_38 = (float *)0x6bd1f7;
  FUN_0069ee40();
  fVar5 = (float)(double)CONCAT44(uVar6,fVar5);
  if (0.01 <= fVar5) {
    local_c = local_10;
    if (local_10 <= 0.01) {
      local_c = 0.01;
    }
    if (fVar5 <= local_c) {
      local_c = fVar5;
    }
  }
  iVar3 = in_ECX[0x2c];
  if (in_ECX[0x2d] != iVar3) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar4 = (undefined4 *)in_ECX[0x2d];
    in_ECX[0x2d] = iVar3;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar4 + 1;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pfStack_34 = (float *)0x1;
        pfStack_38 = (float *)0x6bd254;
        (**(code **)*puVar4)();
      }
    }
  }
  pfStack_34 = (float *)0x6bd264;
  FUN_00680a80();
  pfStack_34 = (float *)0x6bd274;
  FUN_00643b30();
  pfStack_34 = &local_20;
  pfStack_38 = (float *)0x6bd282;
  pfStack_38 = (float *)(**(code **)(*in_ECX + 0xb8))();
  uStack_3c = 0x6bd28a;
  FUN_006c5cf0();
  FUN_006e6400(auStack_44);
  FUN_006ce9f0(1);
  return;
}

