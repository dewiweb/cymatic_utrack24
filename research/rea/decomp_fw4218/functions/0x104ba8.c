// rea decompile_all
// name: FUN_00104ba8
// address: 0x104ba8
// body: available
// range: 0x104ba8-0x104d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00104ba8(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar4 = -1;
  if (param_3 == 2) {
    iVar2 = FUN_00003d18(param_2[1],&DAT_00104d6c);
    bVar6 = iVar2 == 0;
    if (bVar6) goto LAB_00104c08;
  }
  else {
    if (param_3 < 2) goto LAB_00104c08;
    iVar4 = FUN_00003d18(param_2[2],&DAT_00104d6c);
    bVar6 = iVar4 == 0;
  }
  iVar4 = FUN_000032fc(param_2[1],0);
LAB_00104c08:
  uVar5 = *param_2;
  iVar2 = FUN_00003d18(uVar5,&DAT_00104d70);
  uVar1 = DAT_00104d74;
  if (iVar2 == 0) {
    FUN_001b8c68(DAT_00104d74,bVar6);
  }
  else {
    iVar3 = FUN_00003d18(uVar5,&DAT_00104d78);
    iVar2 = DAT_00104d90;
    if (iVar3 == 0) {
      if (iVar4 == -1) {
        iVar4 = 0;
        do {
          FUN_001b640c(iVar2 + iVar4 * 0x80,bVar6);
          FUN_0006d80c();
          iVar4 = iVar4 + 1;
        } while (iVar4 < 5);
      }
      else if (iVar4 < 5) {
        FUN_001b640c(DAT_00104d90 + iVar4 * 0x80,bVar6);
      }
    }
    else {
      iVar3 = FUN_00003d18(uVar5,&DAT_00104d7c);
      iVar2 = DAT_00104d94;
      if (iVar3 == 0) {
        if (iVar4 == -1) {
          iVar4 = 0;
          while( true ) {
            FUN_001b4aac(iVar2 + iVar4 * 0x20,bVar6);
            FUN_0006d80c();
            iVar4 = iVar4 + 1;
            if (4 < iVar4) break;
            while (iVar4 == 1) {
              iVar4 = 2;
            }
          }
        }
        else if (iVar4 < 5) {
          FUN_001b4aac(DAT_00104d94 + iVar4 * 0x20,bVar6);
        }
      }
      else {
        iVar4 = FUN_00003d18(uVar5,&DAT_00104d80);
        if (iVar4 == 0) {
          FUN_001b4bc8(DAT_00104d98,bVar6);
        }
        else {
          iVar4 = FUN_00003d18(uVar5,&DAT_00104d84);
          if (iVar4 == 0) {
            FUN_001b6fc4(DAT_00104d9c,bVar6);
          }
          else {
            iVar4 = FUN_00003d18(uVar5,&DAT_00104d8c);
            if (iVar4 == 0) {
              FUN_001b24d4(uVar1,bVar6);
            }
          }
        }
      }
    }
  }
  return 0;
}

