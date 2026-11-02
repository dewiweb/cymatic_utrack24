// rea decompile_all
// name: FUN_0012d588
// address: 0x12d588
// body: available
// range: 0x12d588-0x12d6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012d588(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  do {
    while ((char)param_1[0x59] == '\0') {
      (**(code **)(*param_1 + 0x1c))(param_1,100);
    }
    while( true ) {
      FUN_001a2920(&uStack_10,param_1 + 0x4f);
      FUN_000f4e84();
      uVar1 = FUN_000f4fc0();
      if ((char)param_1[0x59] == '\0') break;
      iVar2 = FUN_0022e20c(param_1[0x58]);
      if (iVar2 == param_1[0x5a]) {
        FUN_00094f6c(uVar1);
        param_1[0x5b] = 0;
        FUN_001a2938(&uStack_10);
        goto LAB_0012d6dc;
      }
      iVar2 = FUN_0023b208(param_1[0x58],param_1[0x5a]);
      if (*(char *)(iVar2 + 4) == '\b') {
        uVar3 = FUN_0023b208(param_1[0x58],param_1[0x5a]);
        iVar2 = FUN_000c0518(param_1 + 0x30,uVar3);
        if (iVar2 == 0) {
          iVar2 = FUN_0023b208(param_1[0x58],param_1[0x5a]);
          *(undefined1 *)(iVar2 + 4) = 1;
        }
        else {
          iVar2 = FUN_0023b208(param_1[0x58],param_1[0x5a]);
          *(undefined1 *)(iVar2 + 4) = 4;
        }
        param_1[0x5b] = param_1[0x5b] + 1;
      }
      if (param_1[0x5b] == 10) {
        FUN_00094f6c(uVar1);
        param_1[0x5b] = 0;
      }
      param_1[0x5a] = param_1[0x5a] + 1;
      FUN_001a2938(&uStack_10);
      (**(code **)(*param_1 + 0x1c))(param_1,1);
    }
    FUN_001a2938(&uStack_10);
LAB_0012d6dc:
    *(undefined1 *)(param_1 + 0x59) = 0;
    param_1[0x5a] = 0;
  } while( true );
}

