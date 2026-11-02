// rea decompile_all
// name: FUN_000123f8
// address: 0x123f8
// body: available
// range: 0x123f8-0x125c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000123f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_40;
  
  piVar1 = (int *)FUN_0022bbe0(param_2);
  uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
  uVar2 = FUN_0004ceb0(uVar2,0);
  FUN_001b9484(param_1);
  piVar1 = (int *)FUN_000c90cc();
  (**(code **)(*piVar1 + 0x1c))(piVar1);
  local_40 = DAT_000125c4;
  while( true ) {
    local_40 = local_40 + -1;
    if (local_40 == 0) {
      FUN_00064f6c(param_1);
      while( true ) {
        piVar3 = (int *)FUN_0022bbe0(param_2);
        iVar4 = (**(code **)(*piVar3 + 0x148))(piVar3,0);
        if (iVar4 == 0) break;
        uVar7 = *(undefined4 *)(iVar4 + 4);
        iVar5 = FUN_00012c2c(param_4,0);
        if (iVar5 != 0) {
          iVar6 = (**(code **)(*piVar1 + 0x38))(piVar1,iVar5,uVar2,uVar7,iVar4);
          if (iVar6 == 0) {
            FUN_00012bfc(iVar5);
          }
          else {
            (**(code **)(*piVar1 + 0x3c))(piVar1,iVar4,iVar5,uVar2);
            piVar3 = (int *)FUN_0022bc48(param_3);
            (**(code **)(*piVar3 + 0x140))(piVar3,iVar5);
          }
        }
        (**(code **)(*piVar1 + 0x34))(piVar1,iVar4,uVar2,uVar7);
      }
      uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
      return uVar2;
    }
    piVar3 = (int *)FUN_0022bbe0(param_2);
    iVar4 = (**(code **)(*piVar3 + 0x148))(piVar3,0);
    if (iVar4 == 0) break;
    FUN_00012bfc(iVar4);
  }
  uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
  return uVar2;
}

