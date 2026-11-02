// rea decompile_all
// name: FUN_0016f7e0
// address: 0x16f7e0
// body: available
// range: 0x16f7e0-0x16f8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016f7e0(byte *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int local_38;
  uint local_34;
  uint local_24;
  int local_1c;
  
  local_1c = FUN_000034d0();
  local_34 = local_1c + 1;
  iVar3 = 0;
  if ((code *)*DAT_0016f8b8 == entry) {
    local_38 = FUN_0019b388(local_34);
  }
  else {
    local_38 = (*(code *)*DAT_0016f8b8)();
  }
  if (local_38 != 0) {
    local_1c = local_1c + -1;
    local_24 = local_34;
    if (local_1c != -1) {
      do {
        uVar2 = (uint)*param_1;
        iVar1 = 0;
        if (((uVar2 - 0x61 < 0x1a) || (uVar2 - 0x41 < 0x1a)) || (uVar2 - 0x30 < 10)) {
LAB_0016f83c:
          if (param_1 == (byte *)0x0) goto LAB_0016f85c;
          *(byte *)(local_38 + iVar3) = *param_1;
          iVar3 = iVar3 + 1;
        }
        else {
          for (; *(byte *)(param_2 + iVar1) != 0; iVar1 = iVar1 + 1) {
            if (*(byte *)(param_2 + iVar1) == uVar2) goto LAB_0016f83c;
          }
LAB_0016f85c:
          local_24 = local_24 + 2;
          iVar1 = local_38;
          if (local_34 < local_24) {
            local_34 = local_34 << 1;
            if ((code *)*DAT_0016f8bc == entry) {
              iVar1 = FUN_001ab47c(local_38,local_34);
            }
            else {
              iVar1 = (*(code *)*DAT_0016f8bc)();
            }
            if (iVar1 == 0) {
              if (local_38 != 0) {
                if ((code *)*DAT_0016f8c8 == entry) {
                  FUN_0018a280(local_38);
                }
                else {
                  (*(code *)*DAT_0016f8c8)();
                }
              }
              return 0;
            }
          }
          local_38 = iVar1;
          FUN_000028d8(local_38 + iVar3,s____02X_0016f8c0,uVar2);
          iVar3 = iVar3 + 3;
        }
        param_1 = param_1 + 1;
        bVar4 = local_1c != 0;
        local_1c = local_1c + -1;
      } while (bVar4);
    }
    *(undefined1 *)(local_38 + iVar3) = 0;
  }
  return local_38;
}

