// rea decompile_all
// name: FUN_000c5f80
// address: 0xc5f80
// body: available
// range: 0xc5f80-0xc60b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000c5f80(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 4) == 0) {
        if ((param_2 & 0x10) == 0) {
          if ((param_2 & 0x20) == 0) {
            if ((param_2 & 0x40) == 0) {
              if ((param_2 & 0x80) == 0) {
                return;
              }
              uVar3 = 0x13;
            }
            else {
              uVar3 = 0x12;
            }
          }
          else {
            (**(code **)(*param_1 + 0x60))(param_1);
            uVar3 = 0x11;
            *(undefined1 *)(param_1 + 0x17d) = 0;
          }
        }
        else {
          uVar3 = 0x10;
        }
      }
      else {
        if (param_1[0xc5] == 1) {
          iVar2 = param_1[0x11d];
          piVar1 = param_1 + 0x11d;
        }
        else {
          iVar2 = param_1[0x11e];
          piVar1 = param_1 + 0x11e;
        }
        if (param_1[0xc5] == 1) {
          uVar3 = 0xd;
        }
        else {
          uVar3 = 0xe;
        }
        *piVar1 = iVar2 + 1;
      }
    }
    else {
      uVar3 = 0xc;
    }
  }
  else {
    uVar3 = 0xb;
  }
  iVar2 = FUN_001ce2b4(param_1 + 0xf8,&local_18,0xffffffff);
  if (iVar2 != 0) {
    FUN_00002898(DAT_000c60b4,param_1[0xf9],param_1[0xfa],param_1[0xfc],iVar2);
    local_18 = (undefined1 *)0x0;
  }
  if (local_18 != (undefined1 *)0x0) {
    *(undefined4 *)(local_18 + 4) = uVar3;
    *local_18 = 0xff;
    local_1c = local_18;
    thunk_EXT_FUN_004005e0(param_1[0xe6] + 0x10,&local_1c,0xffffffff);
    return;
  }
  param_1[0x11c] = param_1[0x11c] + 1;
  return;
}

