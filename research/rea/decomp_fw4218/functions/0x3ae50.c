// rea decompile_all
// name: FUN_0003ae50
// address: 0x3ae50
// body: available
// range: 0x3ae50-0x3ae8b inclusive
// range: 0x3ae94-0x3af79 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003ae50(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_30 [8];
  int local_28;
  int local_1c;
  
  local_1c = param_1 + 0x250;
  bVar1 = false;
  uVar4 = 0;
  local_28 = param_1 + 0x310;
  do {
    iVar2 = FUN_0003c8ac(uVar4 * 0x18 + param_1 + 0x2e0);
    uVar3 = DAT_0003af7c;
    if (iVar2 != 0) {
      switch(uVar4) {
      case 0:
        FUN_00039968(auStack_30,0xb);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 1:
        FUN_00039968(auStack_30,0xc);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 2:
        uVar3 = FUN_0003a000(local_1c);
        FUN_0003c83c(local_28,uVar3);
        FUN_00039968(auStack_30,8);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 3:
        FUN_00039968(auStack_30,7);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 4:
        FUN_00039968(auStack_30,0x13);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 5:
        FUN_00039968(auStack_30,0x14);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 6:
        FUN_00039968(auStack_30,0xe);
        FUN_0003acbe(param_1,auStack_30);
        break;
      case 7:
        FUN_0003ca1c(*(undefined2 *)(param_1 + 2));
        break;
      default:
        iVar2 = FUN_000366e0(DAT_0003af7c);
        if (iVar2 != 0) {
          FUN_0002f9bc(uVar3);
          FUN_0002f9fc(3,s_PORT__Timer_not_defined_0003af80);
        }
      }
      bVar1 = true;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  if (bVar1) {
    FUN_0003ae08(param_1);
  }
  if ((*(char *)(param_1 + 0x3ba) == '\x02') && (iVar2 = FUN_0003c8ac(param_1 + 0x3bc), iVar2 != 0))
  {
    *(undefined1 *)(param_1 + 0x3b9) = 0;
  }
  return;
}

