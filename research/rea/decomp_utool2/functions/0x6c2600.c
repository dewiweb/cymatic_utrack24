// rea decompile_all
// name: FUN_006c2600
// address: 0x6c2600
// body: available
// range: 0x6c2600-0x6c273a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c2600(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072563b;
  local_10 = ExceptionList;
  uVar7 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = (float *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = '\x01';
  iVar10 = 0;
  local_8 = 0;
  local_14 = in_ECX;
  if (0 < param_1[2]) {
    do {
      (**(code **)(**(int **)(*param_1 + iVar10 * 4) + 8))(&local_34,param_2,uVar7);
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1[2]);
  }
  uVar7 = *(uint *)(local_14 + 0x98);
  if ((uVar7 == local_2c) && (*(char *)(local_14 + 0xac) == local_18)) {
    uVar9 = 0;
    if (uVar7 != 0) {
      pfVar8 = local_34;
      do {
        if (*(float *)((*(int *)(local_14 + 0x90) - (int)local_34) + (int)pfVar8) != *pfVar8)
        goto LAB_006c26bb;
        uVar9 = uVar9 + 1;
        pfVar8 = pfVar8 + 1;
      } while (uVar9 < uVar7);
    }
  }
  else {
LAB_006c26bb:
    pfVar8 = *(float **)(local_14 + 0x90);
    *(float **)(local_14 + 0x90) = local_34;
    uVar2 = *(undefined4 *)(local_14 + 0x94);
    *(undefined4 *)(local_14 + 0x94) = local_30;
    uVar7 = *(uint *)(local_14 + 0x98);
    *(uint *)(local_14 + 0x98) = local_2c;
    uVar3 = *(undefined4 *)(local_14 + 0x9c);
    uVar4 = *(undefined4 *)(local_14 + 0xa0);
    uVar5 = *(undefined4 *)(local_14 + 0xa4);
    uVar6 = *(undefined4 *)(local_14 + 0xa8);
    *(undefined4 *)(local_14 + 0x9c) = local_28;
    *(undefined4 *)(local_14 + 0xa0) = uStack_24;
    *(undefined4 *)(local_14 + 0xa4) = uStack_20;
    *(undefined4 *)(local_14 + 0xa8) = uStack_1c;
    cVar1 = *(char *)(local_14 + 0xac);
    *(char *)(local_14 + 0xac) = local_18;
    local_34 = pfVar8;
    local_30 = uVar2;
    local_2c = uVar7;
    local_28 = uVar3;
    uStack_24 = uVar4;
    uStack_20 = uVar5;
    uStack_1c = uVar6;
    local_18 = cVar1;
    FUN_006bfb60();
  }
  FID_conflict__free(local_34);
  ExceptionList = local_10;
  return;
}

