// rea decompile_all
// name: FUN_0017859c
// address: 0x17859c
// body: available
// range: 0x17859c-0x178ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0017859c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  switch(param_2) {
  case 0xc9:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffffe | param_3;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xca:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffff7f | (param_3 & 1) << 7;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xcb:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffeffff | (param_3 & 1) << 0x10;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xcc:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xff7fffff | (param_3 & 1) << 0x17;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xcd:
    if (*(uint *)(param_1 + 0x54) < 2) {
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100;
        uVar1 = *(uint *)(param_1 + 0x7c) | 0x200;
        *(uint *)(param_1 + 0x7c) = uVar1;
      }
      else {
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100;
        uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffdff;
        *(uint *)(param_1 + 0x7c) = uVar1;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffeff | (param_3 & 1) << 8;
      *(uint *)(param_1 + 0x7c) = uVar1;
    }
    break;
  case 0xce:
    uVar1 = *(uint *)(param_1 + 0x54);
    if (uVar1 < 2) {
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffeff;
        uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffdff;
        *(uint *)(param_1 + 0x7c) = uVar1;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffdff | (param_3 & 1) << 9;
      *(uint *)(param_1 + 0x7c) = uVar1;
    }
    break;
  case 0xcf:
    if (*(uint *)(param_1 + 0x54) < 2) {
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x20000;
        uVar1 = *(uint *)(param_1 + 0x7c) | 0x10000;
        *(uint *)(param_1 + 0x7c) = uVar1;
      }
      else {
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x20000;
        uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffeffff;
        *(uint *)(param_1 + 0x7c) = uVar1;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffdffff | (param_3 & 1) << 0x11;
      *(uint *)(param_1 + 0x7c) = uVar1;
    }
    break;
  case 0xd0:
    uVar1 = *(uint *)(param_1 + 0x54);
    if (uVar1 < 2) {
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffdffff;
        uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffeffff;
        *(uint *)(param_1 + 0x7c) = uVar1;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffeffff | (param_3 & 1) << 0x10;
      *(uint *)(param_1 + 0x7c) = uVar1;
    }
    break;
  case 0xd1:
  default:
switchD_001785b4_default:
    uVar1 = FUN_00002898(s_ERROR__HWCom__setLed__LED_ID__d_n_00178ed4,param_2);
    break;
  case 0xd2:
    goto switchD_001785b4_default;
  case 0xd3:
    goto switchD_001785b4_default;
  case 0xd4:
    goto switchD_001785b4_default;
  case 0xd5:
    goto switchD_001785b4_default;
  case 0xd6:
    goto switchD_001785b4_default;
  case 0xd7:
    goto switchD_001785b4_default;
  case 0xd8:
    goto switchD_001785b4_default;
  case 0xd9:
    goto switchD_001785b4_default;
  case 0xda:
    goto switchD_001785b4_default;
  case 0xdb:
    goto switchD_001785b4_default;
  case 0xdc:
    goto switchD_001785b4_default;
  case 0xdd:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffffd | (param_3 & 1) << 1;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xde:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffffb | (param_3 & 1) << 2;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xdf:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffff7 | (param_3 & 1) << 3;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe0:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffffef | (param_3 & 1) << 4;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe1:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffffdf | (param_3 & 1) << 5;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe2:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffffbf | (param_3 & 1) << 6;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe3:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffeff | (param_3 & 1) << 8;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe4:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffdff | (param_3 & 1) << 9;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe5:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffbff | (param_3 & 1) << 10;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe6:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffff7ff | (param_3 & 1) << 0xb;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe7:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffefff | (param_3 & 1) << 0xc;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe8:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffdfff | (param_3 & 1) << 0xd;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xe9:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffffbfff | (param_3 & 1) << 0xe;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xea:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffff7fff | (param_3 & 1) << 0xf;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xeb:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffdffff | (param_3 & 1) << 0x11;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xec:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfffbffff | (param_3 & 1) << 0x12;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xed:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfff7ffff | (param_3 & 1) << 0x13;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xee:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffefffff | (param_3 & 1) << 0x14;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xef:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffdfffff | (param_3 & 1) << 0x15;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf0:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xffbfffff | (param_3 & 1) << 0x16;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf1:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfeffffff | (param_3 & 1) << 0x18;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf2:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffffe | param_3;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xf3:
    uVar1 = *(uint *)(param_1 + 0x78) & 0x7fffffff | param_3 << 0x1f;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf4:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xbfffffff | (param_3 & 1) << 0x1e;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf5:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xdfffffff | (param_3 & 1) << 0x1d;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf6:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xefffffff | (param_3 & 1) << 0x1c;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf7:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xf7ffffff | (param_3 & 1) << 0x1b;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0xf8:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffffd | (param_3 & 1) << 1;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xf9:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffffb | (param_3 & 1) << 2;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xfa:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffff7 | (param_3 & 1) << 3;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xfb:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffffef | (param_3 & 1) << 4;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xfc:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffffdf | (param_3 & 1) << 5;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xfd:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffffbf | (param_3 & 1) << 6;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xfe:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffff7f | (param_3 & 1) << 7;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0xff:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfdffffff | (param_3 & 1) << 0x19;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0x100:
    uVar1 = *(uint *)(param_1 + 0x78) & 0xfbffffff | (param_3 & 1) << 0x1a;
    *(uint *)(param_1 + 0x78) = uVar1;
    break;
  case 0x101:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffffbff | (param_3 & 1) << 10;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x102:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffff7ff | (param_3 & 1) << 0xb;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x103:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffefff | (param_3 & 1) << 0xc;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x104:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffdfff | (param_3 & 1) << 0xd;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x105:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffffbfff | (param_3 & 1) << 0xe;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x106:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffff7fff | (param_3 & 1) << 0xf;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x107:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfffbffff | (param_3 & 1) << 0x12;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x108:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xfff7ffff | (param_3 & 1) << 0x13;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x109:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffefffff | (param_3 & 1) << 0x14;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x10a:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffdfffff | (param_3 & 1) << 0x15;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x10b:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xffbfffff | (param_3 & 1) << 0x16;
    *(uint *)(param_1 + 0x7c) = uVar1;
    break;
  case 0x10c:
    uVar1 = *(uint *)(param_1 + 0x7c) & 0xff7fffff | (param_3 & 1) << 0x17;
    *(uint *)(param_1 + 0x7c) = uVar1;
  }
  return uVar1;
}

