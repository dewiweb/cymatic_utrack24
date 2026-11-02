// rea decompile_all
// name: FUN_0005fcb8
// address: 0x5fcb8
// body: available
// range: 0x5fcb8-0x6001f inclusive
// range: 0x6013c-0x601a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005fcb8(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  code *pcVar10;
  
  iVar1 = FUN_00003d18(*param_2,&DAT_00060020,param_3,param_4,param_4);
  piVar4 = DAT_00060028;
  if (iVar1 == 0) {
    if (*DAT_00060028 != 0) {
      FUN_00002898(s_Installed_Interrupt_Counter___lu_00060040,DAT_00060028[1]);
      uVar2 = 0;
      piVar4[1] = 0;
      do {
        uVar7 = uVar2 & 0xff;
        FUN_00002898(s_eGpio__2lu__00060064,uVar7);
        iVar1 = (**(code **)(*(int *)*piVar4 + 0x1c))((int *)*piVar4,uVar7);
        if (iVar1 == 1) {
          pcVar5 = s_inp__00060074;
        }
        else {
          pcVar5 = s_out__0006007c;
        }
        FUN_00002898(pcVar5);
        iVar1 = (**(code **)(*(int *)*piVar4 + 0x18))((int *)*piVar4,uVar7);
        if (iVar1 == 1) {
          puVar3 = &DAT_00060084;
        }
        else {
          puVar3 = &DAT_00060088;
        }
        FUN_00002898(puVar3);
        FUN_00002898(s_Installed_Interrupt_Counter___lu_00060040 + 0x20);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x14);
      return 0;
    }
    FUN_00002898(s_No_GPIO_module_available_0006008c);
    return 0;
  }
  iVar1 = FUN_00003d18(*param_2,&DAT_0006002c);
  if (iVar1 == 0) {
    if (*piVar4 == 0) goto LAB_0005fe6c;
    if (param_3 - 1U < 2) {
      return 0;
    }
    uVar2 = FUN_00003258(param_2[1]);
    if (uVar2 < 0x14) {
      iVar1 = FUN_00003258(param_2[2]);
      FUN_00002898(s_GPIO__lu_set_to_000600a8,uVar2);
      piVar4 = (int *)*piVar4;
      if (iVar1 == 0) {
        (**(code **)(*piVar4 + 0x14))(piVar4,uVar2 & 0xff);
        pcVar5 = s_zero_000600c4;
      }
      else {
        (**(code **)(*piVar4 + 0x10))(piVar4,uVar2 & 0xff);
        pcVar5 = &DAT_000600bc;
      }
      goto LAB_0005fe84;
    }
  }
  else {
    iVar1 = FUN_00003d18(*param_2,&DAT_00060030);
    if (iVar1 == 0) {
      if (*piVar4 == 0) goto LAB_0005fe6c;
      if (param_3 - 1U < 2) {
        return 0;
      }
      uVar2 = FUN_00003258(param_2[1]);
      if (uVar2 < 0x14) {
        uVar2 = uVar2 & 0xff;
        FUN_00002898(s_GPIO__lu_set_to_000600a8);
        iVar1 = FUN_00003928(param_2[2],&DAT_000600e4,3);
        piVar6 = (int *)*piVar4;
        if (iVar1 == 0) {
          (**(code **)(*piVar6 + 0xc))(piVar6,uVar2);
          pcVar5 = s_output_000600f0;
        }
        else {
          (**(code **)(*piVar6 + 8))(piVar6,uVar2);
          pcVar5 = s_input_000600e8;
        }
        FUN_00002898(pcVar5);
        puVar9 = (undefined4 *)*piVar4;
        pcVar10 = *(code **)*puVar9;
LAB_0006016c:
        (*pcVar10)(puVar9,uVar2);
        return 0;
      }
    }
    else {
      iVar1 = FUN_00003d18(*param_2,&DAT_00060034);
      if (iVar1 == 0) {
        if (*piVar4 == 0) goto LAB_0005fe6c;
        if (param_3 == 1) {
          return 0;
        }
        uVar7 = FUN_00003258(param_2[1]);
        if (uVar7 < 0x14) {
          iVar1 = 2;
          uVar2 = uVar7 & 0xff;
          if (1 < param_3 - 1U) {
            iVar8 = FUN_00003928(param_2[2],&DAT_000600f8,2);
            if (iVar8 == 0) {
              iVar1 = 1;
            }
            else {
              iVar8 = FUN_00003928(param_2[2],&DAT_000600fc,2);
              if (iVar8 == 0) {
                iVar1 = 0;
              }
              else {
                iVar8 = FUN_00003928(param_2[2],&DAT_00060100,2);
                if ((iVar8 != 0) && (iVar8 = FUN_00003928(param_2[2],&DAT_00060104,2), iVar8 == 0))
                {
                  iVar1 = 3;
                }
              }
            }
          }
          iVar8 = (**(code **)(*(int *)*piVar4 + 0x20))((int *)*piVar4,uVar2,iVar1,DAT_00060108,0);
          if (iVar8 == 0) {
            FUN_00002898(s_Could_not_install_interrupt_hand_000601a4,uVar7);
          }
          else {
            (**(code **)(*(int *)*piVar4 + 0x28))((int *)*piVar4,uVar2);
            FUN_00002898(s_W__Interrupt_handler__s_installe_0006010d + 3,
                         *(undefined4 *)(_DAT_0006010c + iVar1 * 4),uVar7);
          }
          (**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4,uVar2);
          puVar9 = (undefined4 *)*piVar4;
          pcVar10 = *(code **)*puVar9;
          goto LAB_0006016c;
        }
      }
      else {
        iVar1 = FUN_00003d18(*param_2,&DAT_0006003c);
        if (iVar1 != 0) {
          return 6;
        }
        if (*piVar4 == 0) {
LAB_0005fe6c:
          pcVar5 = s_No_GPIO_module_available_0006008c;
          goto LAB_0005fe84;
        }
        if (param_3 == 1) {
          return 0;
        }
        uVar2 = FUN_00003258(param_2[1]);
        if (uVar2 < 0x14) {
          iVar1 = (**(code **)(*(int *)*piVar4 + 0x24))((int *)*piVar4,uVar2 & 0xff);
          if (iVar1 == 0) {
            pcVar5 = s_Could_not_remove_interrupt_handl_00060204;
          }
          else {
            pcVar5 = s_Interrupt_handler_removed_from_G_000601d8;
          }
          FUN_00002898(pcVar5,uVar2);
          return 0;
        }
      }
    }
  }
  pcVar5 = s_Invalid_GPIO_number_000600cc;
LAB_0005fe84:
  FUN_00002898(pcVar5);
  return 0;
}

