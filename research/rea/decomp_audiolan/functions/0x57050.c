// rea decompile_all
// name: FUN_00057050
// address: 0x57050
// body: available
// range: 0x57050-0x5717f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00057050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  uVar7 = *DAT_00057180;
  uVar8 = DAT_00057180[1];
  uVar1 = FUN_001da408(auStack_38);
  uVar2 = FUN_001da408(auStack_34,param_3);
  uVar3 = FUN_001da408(auStack_30,param_4);
  puVar4 = (undefined4 *)FUN_001a0808(0x20,1);
  if (puVar4 == (undefined4 *)0x0) {
    iVar6 = 0;
  }
  else {
    FUN_001da408(auStack_44,uVar1);
    FUN_001da408(auStack_40,uVar2);
    FUN_001da408(auStack_3c,uVar3);
    *puVar4 = DAT_00057184;
    puVar4[1] = param_1;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    iVar6 = FUN_001da408(puVar4 + 4,auStack_44);
    iVar6 = FUN_001da408(iVar6 + 4,auStack_40);
    iVar5 = FUN_001da408(iVar6 + 4,auStack_3c);
    iVar6 = iVar5 + -0x18;
    *(undefined4 *)(iVar5 + 4) = param_5;
    FUN_001da44c(auStack_3c);
    FUN_001da44c(auStack_40);
    thunk_FUN_001da44c(auStack_44);
  }
  uVar1 = FUN_00057188(param_1,iVar6);
  FUN_001da44c(auStack_30);
  FUN_001da44c(auStack_34);
  FUN_001da44c(auStack_38);
  return uVar1;
}

