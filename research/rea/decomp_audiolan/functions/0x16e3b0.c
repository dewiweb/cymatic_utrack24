// rea decompile_all
// name: FUN_0016e3b0
// address: 0x16e3b0
// body: available
// range: 0x16e3b0-0x16e5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0016e3b0(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar3 = (char *)FUN_0019e69c(param_2 + 1,0x3d,0x3b);
  pcVar4 = (char *)FUN_00003318(param_2 + 1,0x3b);
  do {
    pcVar8 = pcVar4;
    if (pcVar8 == (char *)0x0) {
      iVar9 = FUN_000034d0(param_2);
      pcVar8 = param_2 + iVar9;
      pcVar4 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        iVar9 = 0;
        if ((int)pcVar8 - (int)param_2 < 2) {
          return 0;
        }
      }
      else {
        do {
          do {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          } while (cVar1 == '\t');
        } while (cVar1 == ' ');
        iVar9 = 0;
        if ((cVar1 != ',') && (cVar1 != '\0')) {
          iVar5 = (int)pcVar8 - (int)pcVar3;
          if (iVar5 < 2) {
            return 0xfffffffb;
          }
          if ((code *)*DAT_0016e5bc == entry) {
            iVar9 = FUN_0019b388(iVar5);
          }
          else {
            iVar9 = (*(code *)*DAT_0016e5bc)(iVar5);
          }
          if (iVar9 == 0) {
            return 0xfffffffc;
          }
          FUN_001a702a(iVar9,pcVar3 + 1,iVar5 + -1);
        }
        pcVar8 = pcVar3;
        if ((int)pcVar3 - (int)param_2 < 2) {
          if (iVar9 != 0) {
            pcVar7 = (code *)*DAT_0016e5c0;
joined_r0x0016e42e:
            if (pcVar7 == entry) {
              FUN_0018a280(iVar9);
            }
            else {
              (*pcVar7)(iVar9);
            }
          }
          return 0xfffffffb;
        }
      }
      if ((code *)*DAT_0016e5bc == entry) {
        iVar5 = FUN_0019b388((int)pcVar8 - (int)param_2);
      }
      else {
        iVar5 = (*(code *)*DAT_0016e5bc)((int)pcVar8 - (int)param_2);
      }
      if (iVar5 == 0) {
        if (iVar9 != 0) {
          pcVar7 = (code *)*DAT_0016e5c0;
joined_r0x0016e480:
          if (pcVar7 == entry) {
            FUN_0018a280(iVar9);
          }
          else {
            (*pcVar7)(iVar9);
          }
        }
      }
      else {
        FUN_001a702a(iVar5,param_2 + 1,pcVar8 + (-1 - (int)param_2));
        iVar6 = FUN_001a7adc(param_1,iVar5,iVar9);
        puVar2 = DAT_0016e5c0;
        if (iVar6 == 0) {
          return 0;
        }
        if ((code *)*DAT_0016e5c0 == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*DAT_0016e5c0)(iVar5);
        }
        if (iVar9 != 0) {
          if ((code *)*puVar2 == entry) {
            FUN_0018a280(iVar9);
          }
          else {
            (*(code *)*puVar2)(iVar9);
          }
        }
      }
      return 0xfffffffc;
    }
    pcVar4 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      iVar9 = 0;
      pcVar3 = pcVar8;
    }
    else {
      do {
        do {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        } while (cVar1 == '\t');
      } while (cVar1 == ' ');
      iVar9 = 0;
      if ((cVar1 != ',') && (cVar1 != '\0')) {
        iVar5 = (int)pcVar8 - (int)pcVar3;
        if (iVar5 < 2) {
          return 0xfffffffb;
        }
        if ((code *)*DAT_0016e5bc == entry) {
          iVar9 = FUN_0019b388(iVar5);
        }
        else {
          iVar9 = (*(code *)*DAT_0016e5bc)();
        }
        if (iVar9 == 0) {
          return 0xfffffffc;
        }
        FUN_001a702a(iVar9,pcVar3 + 1,iVar5 + -1);
      }
    }
    iVar5 = (int)pcVar3 - (int)param_2;
    if (iVar5 < 2) {
      if (iVar9 == 0) {
        return 0xfffffffb;
      }
      pcVar7 = (code *)*DAT_0016e5c0;
      goto joined_r0x0016e42e;
    }
    if ((code *)*DAT_0016e5bc == entry) {
      iVar6 = FUN_0019b388(iVar5);
    }
    else {
      iVar6 = (*(code *)*DAT_0016e5bc)(iVar5);
    }
    if (iVar6 == 0) {
      if (iVar9 == 0) {
        return 0xfffffffc;
      }
      pcVar7 = (code *)*DAT_0016e5c0;
      goto joined_r0x0016e480;
    }
    FUN_001a702a(iVar6,param_2 + 1,iVar5 + -1);
    iVar5 = FUN_001a7adc(param_1,iVar6,iVar9);
    puVar2 = DAT_0016e5c0;
    if (iVar5 != 0) {
      if ((code *)*DAT_0016e5c0 == entry) {
        FUN_0018a280(iVar6);
      }
      else {
        (*(code *)*DAT_0016e5c0)();
      }
      if (iVar9 == 0) {
        return 0xfffffffc;
      }
      pcVar7 = (code *)*puVar2;
      goto joined_r0x0016e480;
    }
    pcVar3 = (char *)FUN_0019e69c(pcVar8 + 1,0x3d,0x3b);
    pcVar4 = (char *)FUN_00003318(pcVar8 + 1,0x3b);
    param_2 = pcVar8;
  } while( true );
}

