// rea decompile_all
// name: FUN_001d982c
// address: 0x1d982c
// body: available
// range: 0x1d982c-0x1d9a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001d982c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar1 = *(uint *)(*param_1 - 4);
  if (uVar1 < param_2 || param_5 < param_6) {
    local_30 = uVar1;
    if (uVar1 <= param_5) {
      local_30 = param_5;
    }
    uVar2 = param_2;
    if (param_2 <= uVar1) {
      uVar2 = param_6;
    }
    FUN_0010f7cc(9,&DAT_001d9a58,&DAT_001d9a58,uVar2);
  }
  uVar1 = *(int *)(*param_1 - 4) - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (param_5 - param_6 <= param_7) {
    param_7 = param_5 - param_6;
  }
  if (-param_7 - 0xf < *(int *)(*param_1 - 4) - uVar1) {
    local_30 = -param_7 - 0xf;
    FUN_0010f7cc(8,&DAT_001d9a58,&DAT_001d9a58);
  }
  uVar2 = *param_1;
  uVar4 = *(uint *)(uVar2 - 4);
  uVar6 = (uVar4 - uVar1) + param_7;
  if (uVar6 == 0) {
    FUN_001d9b00(param_1);
    uVar1 = DAT_001d9a5c;
  }
  else {
    iVar7 = (uVar4 - uVar1) - param_2;
    local_28 = param_2 * 2;
    iVar9 = local_28 + param_3 * 2;
    iVar8 = param_4 + param_6 * 2;
    if (((*(int *)(uVar2 - 0xc) + 1U < 2) && (uVar6 <= *(uint *)(uVar2 - 8))) &&
       ((param_4 == 0 || ((param_4 < uVar2 || (uVar2 + uVar4 * 2 <= param_4)))))) {
      if (iVar7 != 0) {
        FUN_00003514(local_28 + param_7 * 2 + uVar2,iVar9 + uVar2,iVar7);
      }
      if (param_7 != 0) {
        FUN_00003514(*param_1 + param_2 * 2,iVar8,param_7);
      }
      *(uint *)(*param_1 - 4) = uVar6;
      *(undefined2 *)(*param_1 + uVar6 * 2) = 0;
      uVar1 = *param_1;
      goto LAB_001d9a4c;
    }
    local_30 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (local_30 < uVar4 + 0x80) {
      local_30 = uVar4 + 0x80;
    }
    local_2c = uVar6;
    puVar5 = &local_30;
    if (local_30 < uVar6) {
      puVar5 = &local_2c;
    }
    iVar3 = FUN_001d9a60(param_1,*puVar5,uVar6);
    if (param_2 != 0) {
      FUN_00003628(iVar3 + 0xc,*param_1,local_28);
    }
    if (param_7 != 0) {
      FUN_00003628(iVar3 + param_2 * 2 + 0xc,iVar8,param_7 << 1);
    }
    if (iVar7 != 0) {
      FUN_00003628(iVar3 + param_2 * 2 + param_7 * 2 + 0xc,iVar9 + *param_1,iVar7 * 2);
    }
    FUN_001d9b00(param_1);
    uVar1 = iVar3 + 0xc;
  }
  *param_1 = uVar1;
LAB_001d9a4c:
  return uVar1 + param_2 * 2;
}

