// rea decompile_all
// name: FUN_001da110
// address: 0x1da110
// body: available
// range: 0x1da110-0x1da281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001da110(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
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
    uVar4 = param_5;
    if (param_5 < uVar1) {
      uVar4 = uVar1;
    }
    uVar7 = param_6;
    if (uVar1 < param_2) {
      uVar7 = param_2;
    }
    FUN_0010f7cc(9,&DAT_001da284,&DAT_001da284,uVar7,uVar4);
  }
  uVar1 = *(int *)(*param_1 - 4) - param_2;
  if (local_1c < uVar1) {
    uVar1 = local_1c;
  }
  uVar4 = param_5 - param_6;
  if (param_7 < param_5 - param_6) {
    uVar4 = param_7;
  }
  uVar7 = *(int *)(*param_1 - 4) - uVar1;
  if (-uVar4 - 0xf < uVar7) {
    FUN_0010f7cc(8,&DAT_001da284,&DAT_001da284,uVar7,-uVar4 - 0xf);
  }
  uVar7 = *param_1;
  uVar5 = *(uint *)(uVar7 - 4);
  uVar8 = (uVar5 - uVar1) + uVar4;
  if (uVar8 == 0) {
    FUN_001da314(param_1);
    *param_1 = DAT_001da288;
  }
  else {
    iVar6 = (uVar5 - uVar1) - param_2;
    local_2c = param_2 + local_1c;
    local_28 = local_18 + param_6;
    if (((*(int *)(uVar7 - 0xc) + 1U < 2) && (uVar8 <= *(uint *)(uVar7 - 8))) &&
       ((local_18 == 0 || ((local_18 < uVar7 || (uVar7 + uVar5 <= local_18)))))) {
      if (iVar6 != 0) {
        FUN_000036fc(uVar7 + param_2 + uVar4,uVar7 + local_2c,iVar6);
      }
      if (uVar4 != 0) {
        FUN_000036fc(*param_1 + param_2,local_28,uVar4);
      }
      *(uint *)(*param_1 - 4) = uVar8;
      *(undefined1 *)(uVar8 + *param_1) = 0;
    }
    else {
      local_34 = (uVar5 >> 1) + uVar5 + (uVar5 >> 3);
      if (local_34 < uVar5 + 0x80) {
        local_34 = uVar5 + 0x80;
      }
      local_30 = uVar8;
      puVar2 = (undefined4 *)FUN_001e20ee(&local_34,&local_30);
      iVar3 = FUN_001da28c(param_1,*puVar2,uVar8);
      if (param_2 != 0) {
        FUN_00160ed8(iVar3 + 0xc,*param_1,param_2);
      }
      if (uVar4 != 0) {
        FUN_00160ed8(iVar3 + 0xc + param_2,local_28,uVar4);
      }
      if (iVar6 != 0) {
        FUN_00160ed8(iVar3 + 0xc + param_2 + uVar4,*param_1 + local_2c,iVar6);
      }
      FUN_001da314(param_1);
      *param_1 = iVar3 + 0xc;
    }
  }
  return *param_1 + param_2;
}

