// rea decompile_all
// name: FUN_0023181c
// address: 0x23181c
// body: available
// range: 0x23181c-0x2319a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0023181c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_34;
  uint local_30 [3];
  uint *puStack_24;
  uint uStack_20;
  uint local_1c;
  uint local_18;
  
  uVar1 = *(uint *)(*param_1 - 4);
  puStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((uVar1 < param_2) || (param_5 < param_6)) {
    uVar3 = param_5;
    if (param_5 < uVar1) {
      uVar3 = uVar1;
    }
    uVar9 = param_6;
    if (uVar1 < param_2) {
      uVar9 = param_2;
    }
    FUN_00173800(9,&DAT_002319a8,&DAT_002319a8,uVar9,uVar3);
  }
  uVar1 = *(int *)(*param_1 - 4) - param_2;
  if (local_1c < uVar1) {
    uVar1 = local_1c;
  }
  uVar3 = param_5 - param_6;
  if (param_7 < param_5 - param_6) {
    uVar3 = param_7;
  }
  uVar9 = *(int *)(*param_1 - 4) - uVar1;
  if (-uVar3 - 0xf < uVar9) {
    FUN_00173800(8,&DAT_002319a8,&DAT_002319a8,uVar9,-uVar3 - 0xf);
  }
  uVar9 = *param_1;
  iVar8 = param_2 * 2;
  iVar4 = *(int *)(uVar9 - 4);
  uVar10 = (iVar4 - uVar1) + uVar3;
  if (uVar10 == 0) {
    FUN_00231ebc(param_1);
    *param_1 = DAT_002319ac;
  }
  else {
    iVar5 = (iVar4 - uVar1) - param_2;
    iVar6 = param_2 * 2 + local_1c * 2;
    iVar7 = param_6 * 2 + local_18;
    if (((*(int *)(uVar9 - 0xc) + 1U < 2) && (uVar10 <= *(uint *)(uVar9 - 8))) &&
       ((local_18 == 0 || ((local_18 < uVar9 || (uVar9 + iVar4 * 2 <= local_18)))))) {
      if (iVar5 != 0) {
        FUN_000037aa(iVar8 + uVar3 * 2 + uVar9,iVar6 + uVar9,iVar5);
      }
      if (uVar3 != 0) {
        FUN_000037aa(*param_1 + iVar8,iVar7,uVar3);
      }
      *(uint *)(*param_1 - 4) = uVar10;
      *(undefined2 *)(uVar10 * 2 + *param_1) = 0;
    }
    else {
      local_34 = FUN_0020b4f4(iVar4,param_1);
      local_30[0] = uVar10;
      puVar2 = (undefined4 *)FUN_00247bfc(&local_34,local_30);
      iVar4 = FUN_00231e54(param_1,*puVar2,uVar10);
      if (param_2 != 0) {
        FUN_001c10ac(iVar4 + 0xc,*param_1,param_2);
      }
      if (uVar3 != 0) {
        FUN_001c10ac(iVar4 + 0xc + iVar8,iVar7,uVar3);
      }
      if (iVar5 != 0) {
        FUN_001c10ac(iVar4 + 0xc + iVar8 + uVar3 * 2,iVar6 + *param_1,iVar5);
      }
      FUN_00231ebc(param_1);
      *param_1 = iVar4 + 0xc;
    }
  }
  return *param_1 + iVar8;
}

