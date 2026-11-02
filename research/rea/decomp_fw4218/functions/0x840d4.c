// rea decompile_all
// name: FUN_000840d4
// address: 0x840d4
// body: available
// range: 0x840d4-0x84303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000840d4(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = FUN_0022e20c(*DAT_00084304);
  if ((iVar2 == 0) || (*(int *)(DAT_00084308 + 0x54) == -1)) {
    FUN_00083654(param_1);
    uVar3 = FUN_0011eda0();
    FUN_001200e0(uVar3,s____0___No_Songs_in_Folder_00084311 + 7);
    uVar3 = FUN_0011eda0();
    FUN_00120150(uVar3,&DAT_0008432c);
    FUN_000f4e84();
    uVar3 = FUN_000f4fc0();
    uVar4 = FUN_00230e4c(&uStack_2c);
    uVar4 = FUN_00231ef4(&uStack_28,&DAT_0008432c,uVar4);
    FUN_00093bf4(uVar3,uVar4);
    FUN_00232190(&uStack_28);
    uVar4 = FUN_00230e4c(&uStack_2c);
    uVar4 = FUN_00231ef4(&uStack_28,&DAT_0008432c,uVar4);
    FUN_0009350c(uVar3,uVar4);
    FUN_00232190(&uStack_28);
    FUN_00094d30(uVar3,0);
    iVar2 = DAT_00084308;
    *(undefined4 *)(DAT_00084308 + 0x1c) = 0;
    *(undefined2 *)(iVar2 + 0x1a) = 0;
    *(undefined2 *)(iVar2 + 0x26) = 0;
    FUN_001a7f24(&local_38);
    (**(code **)(*param_1 + 8))(param_1,local_38,uStack_34,local_30,local_38,uStack_34,local_30,0,1)
    ;
    uVar3 = FUN_0011eda0();
    uVar3 = FUN_0011f5a8(uVar3,0,0,1);
  }
  else {
    if (param_3 != 0) {
      FUN_002399e8(DAT_0008430c);
      FUN_000bb774(param_1,_DAT_00084310 + -0x10);
      FUN_00085cdc(param_1);
    }
    FUN_00082020(param_1,param_4);
    FUN_00084d48(param_1);
    uVar1 = FUN_0022dff0(DAT_0008430c);
    uVar3 = FUN_0011eda0();
    FUN_0011fcc0(uVar3,uVar1);
    FUN_001a7f24(&local_30);
    (**(code **)(*param_1 + 8))
              (param_1,*(undefined4 *)(DAT_00084308 + 0x40),*(undefined4 *)(DAT_00084308 + 0x44),
               *(undefined4 *)(DAT_00084308 + 0x48),local_30,uStack_2c,uStack_28,0,1);
    uVar3 = FUN_000bfdd4(param_1,s____0___No_Songs_in_Folder_00084311._3_4_);
    uVar4 = FUN_0011eda0();
    uVar3 = FUN_0011f5a8(uVar4,uVar3,param_2,param_5);
  }
  return uVar3;
}

