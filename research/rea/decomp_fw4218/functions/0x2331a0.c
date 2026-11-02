// rea decompile_all
// name: FUN_002331a0
// address: 0x2331a0
// body: available
// range: 0x2331a0-0x23331b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_002331a0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uStack_20;
  uint uStack_1c;
  
  if ((param_1[1] & 8U) == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0xffffffff) {
    if ((param_1[1] & 4U) == 0) {
      iVar1 = param_1[10];
      iVar3 = param_1[8];
    }
    else {
      iVar1 = param_1[7];
      iVar3 = param_1[5];
    }
    uVar4 = param_1[3];
    if (param_1[2] + uVar4 <= (uint)param_1[10]) {
      uStack_1c = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (uStack_1c < uVar4 + 1) {
        uStack_1c = uVar4 + 1;
      }
      puVar5 = &uStack_1c;
      if ((int)uStack_1c <= (int)(uVar4 + 1)) {
        puVar5 = &uStack_20;
      }
      uStack_20 = uVar4 + 1;
      uVar4 = *puVar5;
      iVar2 = FUN_00173860(uVar4,0);
      if ((param_1[2] != 0) && (FUN_000039e0(iVar2,param_1[2],param_1[3]), (param_1[4] & 1U) != 0))
      {
        FUN_00173a54(param_1[2],param_1[3],0);
      }
      param_1[4] = param_1[4] | 1;
      param_1[3] = uVar4;
      param_1[2] = iVar2;
    }
    iVar2 = param_1[2];
    puVar6 = (undefined1 *)(iVar2 + (iVar1 - iVar3) + 1);
    puVar7 = (undefined1 *)(iVar2 + (iVar1 - iVar3));
    param_1[10] = (int)puVar6;
    param_1[8] = iVar2;
    param_1[9] = (int)puVar7;
    if ((~param_1[1] & 0xcU) == 0) {
      iVar1 = param_1[5];
      param_1[5] = iVar2;
      param_1[6] = (param_1[6] - iVar1) + iVar2;
      param_1[7] = (int)puVar6;
    }
    uVar4 = param_2 & 0xff;
    uStack_20 = CONCAT31(uStack_20._1_3_,(char)param_2);
    if ((param_1[1] & 8U) == 0 || puVar6 == puVar7) {
      uVar4 = (**(code **)(*param_1 + 0x28))();
    }
    else {
      param_1[9] = (int)(puVar7 + 1);
      *puVar7 = (char)param_2;
    }
    return uVar4;
  }
  return 0;
}

