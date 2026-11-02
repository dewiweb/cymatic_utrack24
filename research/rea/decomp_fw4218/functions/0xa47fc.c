// rea decompile_all
// name: FUN_000a47fc
// address: 0xa47fc
// body: available
// range: 0xa47fc-0xa4927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a47fc(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = (uint)*(byte *)(param_1 + 7);
  uVar2 = *(int *)(param_1 + 0xd4) * uVar5;
  iVar6 = (uint)*(ushort *)(param_2 + -2) + param_2 + 0x14 + (uint)*(byte *)(param_1 + 6) * 4;
  iVar1 = *(int *)(param_1 + 0xcc);
  uVar4 = uVar2 & 3;
  uVar2 = uVar2 * 3 >> 2;
  do {
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        uVar3 = *(uint *)(iVar6 + uVar7 * 4);
        if (uVar4 == 0) {
          uVar3 = uVar3 >> 8;
          uVar4 = 1;
LAB_000a4898:
          *(uint *)(iVar1 + uVar2 * 4) = uVar3;
        }
        else {
          if (uVar4 == 1) {
            *(uint *)(iVar1 + uVar2 * 4) = *(uint *)(iVar1 + uVar2 * 4) | (uVar3 & 0xff00) << 0x10;
            uVar3 = uVar3 >> 0x10;
            uVar2 = uVar2 + 1;
            uVar4 = 2;
            goto LAB_000a4898;
          }
          if (uVar4 == 2) {
            *(uint *)(iVar1 + uVar2 * 4) = *(uint *)(iVar1 + uVar2 * 4) | (uVar3 & 0xffff00) << 8;
            uVar2 = uVar2 + 1;
            uVar4 = 3;
            *(uint *)(iVar1 + uVar2 * 4) = uVar3 >> 0x18;
          }
          else if (uVar4 == 3) {
            *(uint *)(iVar1 + uVar2 * 4) = uVar3 & 0xffffff00 | *(uint *)(iVar1 + uVar2 * 4);
            uVar4 = 0;
            uVar2 = uVar2 + 1;
          }
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < uVar5);
    }
    uVar7 = *(int *)(param_1 + 0xd4) + 1;
    *(uint *)(param_1 + 0xd4) = uVar7;
    if (*(uint *)(param_1 + 0xd0) <= uVar7) {
      iVar1 = FUN_000a426c(param_1);
      uVar4 = 0;
      uVar2 = 0;
    }
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return;
    }
    iVar6 = iVar6 + (uint)*(byte *)(param_1 + 5) * 4;
  } while( true );
}

