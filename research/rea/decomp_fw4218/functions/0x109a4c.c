// rea decompile_all
// name: FUN_00109a4c
// address: 0x109a4c
// body: available
// range: 0x109a4c-0x109c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00109a4c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0006e01a(param_1[0x26],0xd);
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1[0x26] + 0x2c))((int *)param_1[0x26],0xd);
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_0011eda0();
  iVar1 = FUN_000a0f48();
  if (iVar1 == 0x1b) {
    *(bool *)((int)param_1 + 0xa5) = *(char *)((int)param_1 + 0xa5) == '\0';
    uVar2 = FUN_0011eda0();
    FUN_001201c0(uVar2,*(undefined1 *)((int)param_1 + 0xa5));
    (**(code **)(*(int *)param_1[0x26] + 0x28))((int *)param_1[0x26],0x10);
  }
  else {
    FUN_000f4e84();
    uVar2 = FUN_000f4fb4();
    iVar1 = FUN_0006d818(uVar2);
    if (((iVar1 != 1) || (param_1[0x2c] == 0)) && (iVar1 = FUN_000bc47c(param_1 + 5), iVar1 == 0)) {
      if (param_2 == 0) {
        iVar1 = FUN_00081914(param_1 + 5);
      }
      else {
        iVar1 = FUN_000815bc(param_1 + 5,0);
      }
      if (iVar1 != 0) {
        (**(code **)(*(int *)param_1[0x26] + 0x2c))((int *)param_1[0x26],9);
        FUN_00085cbc(param_1 + 5,0x66);
        iVar1 = FUN_0006d818(uVar2);
        if (iVar1 == 1) {
          FUN_000aa570();
          uVar2 = FUN_000aa88c();
          FUN_000f4e84();
          uVar3 = FUN_000f4fc0();
          iVar1 = FUN_00093a08(uVar3);
          FUN_0008ce78(uVar2,*(undefined4 *)(iVar1 + 0x24));
        }
        FUN_000835e4(param_1 + 5);
        FUN_0010a328(param_1);
        FUN_00084a18(param_1 + 5);
        uVar2 = (**(code **)(*(int *)param_1[2] + 8))();
        FUN_00084b88(param_1 + 5,1,uVar2,0);
      }
    }
  }
  return 1;
}

