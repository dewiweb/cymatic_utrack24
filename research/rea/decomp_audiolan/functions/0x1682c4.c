// rea decompile_all
// name: FUN_001682c4
// address: 0x1682c4
// body: available
// range: 0x1682c4-0x16846f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001682c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  
  piVar7 = (int *)(param_1 + -300);
  uVar1 = *(undefined4 *)(DAT_00168470 + 0x90);
  uVar2 = *(undefined4 *)(DAT_00168470 + 0x94);
  uVar3 = FUN_001da408(auStack_3c,param_6);
  uVar4 = FUN_001da408(auStack_38,param_7);
  local_30 = FUN_001da408(auStack_34,param_8);
  puVar5 = (undefined4 *)FUN_001a0808(0x2c,1);
  if (puVar5 == (undefined4 *)0x0) {
    iVar6 = 0;
  }
  else {
    FUN_001da408(auStack_48,uVar3);
    FUN_001da408(auStack_44,uVar4);
    FUN_001da408(auStack_40,local_30);
    *puVar5 = DAT_00168474;
    puVar5[1] = piVar7;
    puVar5[2] = uVar1;
    puVar5[3] = uVar2;
    puVar5[7] = param_5;
    puVar5[4] = param_2;
    puVar5[5] = param_3;
    puVar5[6] = param_4;
    iVar6 = FUN_001da408(puVar5 + 8,auStack_48);
    iVar6 = FUN_001da408(iVar6 + 4,auStack_44);
    iVar6 = FUN_001da408(iVar6 + 4,auStack_40);
    iVar6 = iVar6 + -0x28;
  }
  uVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,iVar6,0xffffffff);
  if (puVar5 != (undefined4 *)0x0) {
    thunk_FUN_001da314(auStack_40);
    thunk_FUN_001da314(auStack_44);
    thunk_FUN_001da314(auStack_48);
  }
  FUN_001da314(auStack_34);
  FUN_001da314(auStack_38);
  FUN_001da314(auStack_3c);
  return uVar1;
}

