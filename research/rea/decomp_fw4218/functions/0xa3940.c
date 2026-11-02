// rea decompile_all
// name: FUN_000a3940
// address: 0xa3940
// body: available
// range: 0xa3940-0xa3b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000a3940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int *param_11,undefined4 param_12,
                undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                undefined4 param_17,undefined1 param_18,undefined1 param_19)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)
           FUN_000f581c(param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10,param_12,
                        param_13,param_14,param_1,param_2,param_3);
  piVar4 = DAT_000a3b98;
  *puVar1 = DAT_000a3b94;
  iVar2 = *param_11;
  if (*(int *)(iVar2 + -0xc) == -1) {
    uVar8 = *(uint *)(iVar2 + -4);
    if (0xfffffff1 < uVar8) {
      FUN_00173800(8,&DAT_000a3b9c,&DAT_000a3b9c,uVar8,0xfffffff1);
    }
    if (uVar8 != 0) {
      piVar4 = (int *)FUN_00173860((uVar8 + 8) * 2,0);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
      }
      piVar4[1] = uVar8;
      piVar4[2] = uVar8;
      puVar6 = (undefined2 *)((int)piVar4 + uVar8 * 2 + 0xc);
      *piVar4 = 0;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar1[0x27] = piVar4 + 3;
    FUN_000039e0(piVar4 + 3,*param_11,uVar8 << 1);
  }
  else {
    puVar1[0x27] = iVar2;
    piVar3 = (int *)(iVar2 + -0xc);
    if (piVar3 != piVar4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *(undefined1 *)(puVar1 + 0x28) = param_19;
  iVar5 = FUN_001c70d8(puVar1 + 0x29,DAT_000a3ba0,0x54,0x10);
  *(undefined1 *)(iVar5 + 0x540) = 0;
  *(undefined1 *)(iVar5 + 0x541) = 0;
  *(undefined4 *)(iVar5 + 0x544) = 0;
  *(undefined4 *)(iVar5 + 0x548) = 0xffffffff;
  *(undefined2 *)(iVar5 + 0x54c) = 0;
  *(undefined2 *)(iVar5 + 0x54e) = 0;
  *(undefined4 *)(iVar5 + 0x550) = 0;
  *(undefined4 *)(iVar5 + 0x574) = 0;
  *(undefined4 *)(iVar5 + 0x578) = 0;
  *(undefined4 *)(iVar5 + 0x57c) = 0;
  *(undefined4 *)(iVar5 + 0x580) = 0;
  *(undefined4 *)(iVar5 + 0x584) = 0;
  *(undefined4 *)(iVar5 + 0x588) = 0;
  *(undefined4 *)(iVar5 + 0x590) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x58c) = 0;
  *(undefined1 *)(iVar5 + 0x594) = 0;
  *(undefined1 *)(iVar5 + 0x595) = 0;
  FUN_00003c08(iVar5 + 0x554,0x20,0xffffffff);
  *(undefined4 *)(iVar5 + 0x5bc) = 0;
  *(undefined4 *)(iVar5 + 0x5c0) = 0;
  *(undefined4 *)(iVar5 + 0x5c4) = 0;
  *(undefined4 *)(iVar5 + 0x5c8) = 0;
  *(undefined4 *)(iVar5 + 0x5cc) = 0;
  iVar2 = DAT_000a3ba4;
  *(undefined4 *)(iVar5 + 0x5d0) = 0;
  *(undefined4 *)(iVar5 + 0x5d4) = param_8;
  *(undefined2 *)(iVar2 + iVar5 + -0xa4) = 0;
  *(undefined1 *)(iVar5 + 0x5da) = 0;
  puVar1 = DAT_000a3ba8;
  *(undefined1 *)(iVar5 + 0x5db) = param_4;
  uVar7 = puVar1[1];
  *(undefined4 *)(iVar5 + 0x5dc) = *puVar1;
  *(undefined4 *)(iVar5 + 0x5e0) = uVar7;
  iVar2 = FUN_001c70d8(iVar5 + 0x5e4,DAT_000a3bac,0x2c,9);
  iVar2 = FUN_0012c53c(iVar2 + 0x18c);
  FUN_000039e0(iVar2 + 0x18,param_15,0x20);
  FUN_000039e0(iVar2 + -0x21c,param_15,0x20);
  *(undefined4 *)(iVar2 + -0x1d8) = 0;
  *(undefined4 *)(iVar2 + -0x1d4) = 0;
  *(undefined4 *)(iVar2 + -0x1d0) = 0;
  *(undefined4 *)(iVar2 + -0x1cc) = 0;
  *(undefined4 *)(iVar2 + -0x1c8) = 0;
  *(undefined4 *)(iVar2 + -0x1c4) = 0;
  *(undefined4 *)(iVar2 + -0x1c0) = 0;
  *(undefined4 *)(iVar2 + -0x1bc) = 0;
  *(undefined4 *)(iVar2 + -0x1b8) = 0;
  *(undefined4 *)(iVar2 + -0x22c) = param_16;
  *(undefined4 *)(iVar2 + -0x1e4) = param_17;
  *(undefined1 *)(iVar2 + -0x1dc) = param_18;
  return iVar2 + -0x814;
}

