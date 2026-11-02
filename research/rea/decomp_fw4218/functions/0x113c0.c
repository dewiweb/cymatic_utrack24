// rea decompile_all
// name: FUN_000113c0
// address: 0x113c0
// body: available
// range: 0x113c0-0x114fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000113c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = param_1[2] + 0x118;
  FUN_001f00bc();
  cVar1 = (char)param_1[9];
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      if (cVar1 == '\x01' || cVar1 == '\x05') {
        *(undefined1 *)(param_1 + 9) = 2;
        iVar3 = FUN_0000a2e8(param_1 + 1);
        if (iVar3 == -1) {
          iVar3 = (**(code **)(*param_1 + 0x18c))(param_1,0,0xfffffffe);
          if (iVar3 == 0) goto LAB_0001140c;
          uVar4 = (**(code **)(*param_1 + 400))(param_1);
        }
        else {
          uVar4 = FUN_000092c4(param_1[2],param_1);
        }
        FUN_001f06d4(iVar2);
        return uVar4;
      }
LAB_0001140c:
      FUN_001f06d4(iVar2);
      return 0;
    }
    iVar3 = FUN_001df380(param_1[7]);
    iVar5 = param_1[8];
    param_1[0xd0] = iVar3;
    if (iVar5 != 0) {
      iVar3 = FUN_001df380(iVar5);
      param_1[0xd1] = iVar3;
      param_1[0xd5] = *(int *)(iVar5 + 0xcc);
    }
    *(undefined1 *)((int)param_1 + 0x359) = 0;
    thunk_EXT_FUN_0040010c(param_1[0xd7]);
  }
  FUN_001f06d4(iVar2);
  return 1;
}

