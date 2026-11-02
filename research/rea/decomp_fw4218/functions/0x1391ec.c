// rea decompile_all
// name: FUN_001391ec
// address: 0x1391ec
// body: available
// range: 0x1391ec-0x13942b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001391ec(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_60 [64];
  
  FUN_000f4e84();
  uVar1 = FUN_000f5150();
  uVar2 = FUN_001b6f18(param_2);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar2 = FUN_001b6f24(param_2);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  uVar2 = FUN_001b6f74(param_2);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar3 = FUN_001b6f0c(param_2);
  *(char *)(param_1 + 0xd9) = (char)uVar3;
  *(char *)(param_1 + 0xd8) = (char)uVar3;
  if (param_3 == 0) {
    if (((*(int *)(param_1 + 0xe8) == 4) || (uVar3 = *(uint *)(param_1 + 0xe8), uVar3 == 3)) &&
       (uVar3 = FUN_001b6f74(uVar1), 8 < uVar3)) {
      FUN_0011eda0();
      iVar4 = FUN_000a0f3c();
      if (iVar4 != 9) {
        FUN_000028cc(auStack_60,s_Track_Count_Changed_to__d_0013942c,8);
        uVar2 = FUN_0011eda0();
        FUN_0011ff88(uVar2,auStack_60,&DAT_00139448);
        uVar2 = FUN_0011eda0();
        FUN_000a1000(uVar2,0x1c);
      }
      uVar3 = FUN_000b830c(uVar1,8);
    }
  }
  else if (param_3 != 1) {
    if (param_3 == 2) {
      if ((8 < *(int *)(param_1 + 0xdc)) &&
         ((*(int *)(param_1 + 0xe8) == 4 || (*(int *)(param_1 + 0xe8) == 3)))) {
        FUN_0011eda0();
        iVar4 = FUN_000a0f3c();
        if (iVar4 != 9) {
          uVar2 = FUN_000bde84(param_1 + 0x18,2);
          FUN_000028cc(auStack_60,s_Sample_Rate_Changed_to__s_0013944c,uVar2);
          uVar2 = FUN_0011eda0();
          FUN_0011ff88(uVar2,auStack_60,&DAT_00139448);
          uVar2 = FUN_0011eda0();
          FUN_000a1000(uVar2,0x1c);
          FUN_001d0130(2000);
        }
        FUN_000b810c(uVar1,2);
      }
      iVar4 = FUN_000bc47c(param_1 + 0x18);
      uVar3 = 0;
      if (iVar4 != 0) {
        FUN_000aa570();
        uVar1 = FUN_000aa88c();
        uVar3 = FUN_0008d25c(uVar1);
      }
    }
    else if (param_3 != 3) {
      return uVar3;
    }
  }
  FUN_000f4e84(uVar3);
  uVar1 = FUN_000f4fc0();
  iVar4 = FUN_001b5844(uVar1);
  if ((iVar4 == 0) && (iVar4 = FUN_000bc47c(param_1 + 0x18), iVar4 == 0)) {
    FUN_000bf8bc(param_1 + 0x18);
  }
  uVar3 = FUN_001389ec(param_1);
  return uVar3;
}

