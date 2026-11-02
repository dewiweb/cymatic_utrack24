// rea decompile_all
// name: FUN_0022a084
// address: 0x22a084
// body: available
// range: 0x22a084-0x22a147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0022a084(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uStack_18;
  
  cVar1 = *(char *)(*(int *)(param_2 + 8) + 4);
  uStack_18 = param_4;
  if (cVar1 == '\x02') {
    FUN_00066186(param_2);
    uVar4 = DAT_0022a154;
LAB_0022a0e8:
    *(undefined4 *)(param_2 + 0xc) = uVar4;
  }
  else {
    iVar5 = param_2 + 0x14;
    puVar6 = (undefined1 *)(param_2 + 0x100);
    if (cVar1 == '\x03') {
      FUN_000e884e(iVar5,DAT_0022a148);
      uVar4 = 16000;
LAB_0022a122:
      iVar3 = FUN_0001a724(iVar5,0,uVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      FUN_000e8844(iVar5);
      FUN_00002898(DAT_0022a14c + -0x4c);
      *puVar6 = 1;
      *(char *)(param_2 + 0x101) = (char)iVar3;
    }
    else {
      if (cVar1 == '\x04') {
        *(undefined4 *)(param_2 + 0x118) = 0;
        *(undefined4 *)(param_2 + 0xb4) = 0;
        FUN_00002898(DAT_0022a14c);
        FUN_000e8830(iVar5);
        uVar4 = DAT_0022a150;
        goto LAB_0022a0e8;
      }
      if (cVar1 == '\x06') {
        if (*(int *)(param_2 + 0xb4) < 0xf) {
          FUN_001d0130(400);
          uVar4 = DAT_0022a158;
          *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + 1;
          FUN_000e884e(iVar5,uVar4);
          uVar4 = 32000;
          goto LAB_0022a122;
        }
        *puVar6 = 1;
        uVar2 = 3;
      }
      else {
        if (cVar1 != '\x05') {
          return 0;
        }
        *puVar6 = 1;
        uVar2 = 4;
      }
      *(undefined1 *)(param_2 + 0x101) = uVar2;
    }
    FUN_00201cfc(&uStack_18,param_2);
    FUN_00201d0c(&uStack_18);
  }
  return 1;
}

