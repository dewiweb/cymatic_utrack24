// rea decompile_all
// name: FUN_0006c8ec
// address: 0x6c8ec
// body: available
// range: 0x6c8ec-0x6cac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006c8ec(uint *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  cVar1 = *param_2;
  while (cVar1 == ' ') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  iVar3 = FUN_00003738(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1[6] != 0) {
    iVar3 = *(int *)(*(int *)(param_1[5] + 4) + 0xc);
    if (iVar3 == 0) {
      iVar3 = DAT_0006cac4;
    }
    iVar3 = FUN_00003d18(iVar3,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*param_1 < param_1[6]) && (puVar5 = *(uint **)param_1[5], puVar5 != (uint *)param_1[5])) {
      *(uint *)puVar5[1] = *puVar5;
      *(uint *)(*puVar5 + 4) = puVar5[1];
      param_1[6] = param_1[6] - 1;
      (**(code **)(puVar5[2] + 8))(puVar5 + 2);
      *puVar5 = param_1[2];
      param_1[2] = (uint)puVar5;
    }
  }
  uVar2 = DAT_0006cac8;
  uStack_2c = 0;
  uStack_30 = DAT_0006cac8;
  puVar5 = (uint *)param_1[2];
  uVar8 = param_1[5];
  puVar6 = param_1 + 1;
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)param_1[3];
    if (puVar5 == (uint *)param_1[4]) {
      uVar7 = 1;
      if (*puVar6 != 0) {
        uVar4 = *(uint *)(*puVar6 + 4);
        uVar7 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar7 < uVar4 + 1) {
          uVar7 = uVar4 + 1;
        }
      }
      puVar5 = (uint *)FUN_00173860(0xc,0);
      uVar4 = FUN_00173860(uVar7 << 4,0);
      puVar5[2] = uVar4;
      *puVar5 = *puVar6;
      puVar5[1] = uVar7;
      *puVar6 = (uint)puVar5;
      puVar5 = (uint *)puVar5[2];
      param_1[3] = (uint)puVar5;
      param_1[4] = (uint)(puVar5 + uVar7 * 4);
    }
    param_1[3] = (uint)(puVar5 + 4);
  }
  else {
    param_1[2] = *puVar5;
  }
  if (puVar5 + 2 != (uint *)0x0) {
    thunk_FUN_00063b9c(puVar5 + 2,&uStack_30);
  }
  *puVar5 = uVar8;
  puVar5[1] = *(uint *)(uVar8 + 4);
  **(undefined4 **)(uVar8 + 4) = puVar5;
  *(uint **)(uVar8 + 4) = puVar5;
  param_1[6] = param_1[6] + 1;
  uStack_30 = uVar2;
  FUN_001eecc8(uStack_2c);
  FUN_00063a90(*(int *)(param_1[5] + 4) + 8,param_2);
  return 0;
}

