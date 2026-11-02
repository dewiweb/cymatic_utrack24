// rea decompile_all
// name: FUN_002319b0
// address: 0x2319b0
// body: available
// range: 0x2319b0-0x231aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_002319b0(int *param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_34;
  uint local_30 [3];
  int *piStack_24;
  uint uStack_20;
  uint local_1c;
  int iStack_18;
  
  piStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  if (*(uint *)(*param_1 + -4) < param_2) {
    FUN_00173800(9,&DAT_00231af0,&DAT_00231af0,param_2,*(uint *)(*param_1 + -4));
  }
  uVar7 = *(int *)(*param_1 + -4) - param_2;
  if (local_1c < uVar7) {
    uVar7 = local_1c;
  }
  uVar6 = *(int *)(*param_1 + -4) - uVar7;
  if (-param_4 - 0xfU <= uVar6) {
    FUN_00173800(8,&DAT_00231af0,&DAT_00231af0,uVar6,-param_4 - 0xfU);
  }
  iVar1 = *param_1;
  iVar3 = *(int *)(iVar1 + -4) - uVar7;
  uVar7 = iVar3 + param_4;
  if (uVar7 == 0) {
    FUN_00231ebc(param_1);
    *param_1 = DAT_00231af4;
  }
  else {
    iVar3 = iVar3 - param_2;
    iVar5 = param_2 * 2;
    iVar4 = iVar5 + local_1c * 2;
    if ((*(int *)(iVar1 + -0xc) + 1U < 2) && (uVar7 <= *(uint *)(iVar1 + -8))) {
      if (iVar3 != 0) {
        FUN_001c10ba(iVar5 + param_4 * 2 + iVar1,iVar4 + iVar1,iVar3);
      }
      if (param_4 != 0) {
        FUN_000038d0(*param_1 + iVar5,param_5,param_4);
      }
      *(uint *)(*param_1 + -4) = uVar7;
      *(undefined2 *)(uVar7 * 2 + *param_1) = 0;
    }
    else {
      local_34 = FUN_0020b4f4(*(int *)(iVar1 + -4),param_1);
      local_30[0] = uVar7;
      puVar2 = (undefined4 *)FUN_00247bfc(&local_34,local_30);
      iVar1 = FUN_00231e54(param_1,*puVar2,uVar7);
      if (param_2 != 0) {
        FUN_001c10ac(iVar1 + 0xc,*param_1,param_2);
      }
      if (param_4 != 0) {
        FUN_000038d0(iVar1 + 0xc + iVar5,param_5,param_4);
      }
      if (iVar3 != 0) {
        FUN_001c10ac(iVar1 + 0xc + iVar5 + param_4 * 2,iVar4 + *param_1,iVar3);
      }
      FUN_00231ebc(param_1);
      *param_1 = iVar1 + 0xc;
    }
  }
  return param_1;
}

