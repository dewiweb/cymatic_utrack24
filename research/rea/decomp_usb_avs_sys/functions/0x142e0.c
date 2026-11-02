// rea decompile_all
// name: FUN_000142e0
// address: 0x142e0
// body: available
// range: 0x142e0-0x1453f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_000142e0(undefined8 param_1,int param_2,undefined4 *param_3,uint param_4,undefined8 param_5,
            uint *param_6)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar5;
  ulonglong uVar4;
  
  uVar1 = *param_6;
  if (uVar1 == 0) {
LAB_0001451c:
    param_6[5] = 0xc000000d;
  }
  else {
    if (uVar1 < 3) {
      if ((param_2 == 1) || (param_2 == 2)) {
        uVar1 = param_6[4];
        if (uVar1 < 2) {
LAB_0001446a:
          param_6[5] = 0xc0000023;
          param_6[4] = param_4;
          return 0;
        }
        uVar3 = param_4 >> 1;
        uVar4 = (ulonglong)uVar3;
        puVar2 = *(undefined2 **)(param_6 + 2);
        if (uVar3 == 0) {
          *puVar2 = 0;
          param_6[4] = 2;
          param_6[5] = 0;
          return 0;
        }
        if (*(short *)((longlong)param_3 + (ulonglong)(uVar3 - 1) * 2) != 0) {
          if ((ulonglong)uVar1 < (ulonglong)(uVar3 + 1) * 2) {
            param_6[5] = 0xc0000023;
            param_6[4] = uVar3 * 2 + 2;
            return 0;
          }
          memcpy(puVar2,param_3,uVar4 * 2);
          puVar2[uVar4] = 0;
          param_6[4] = uVar3 * 2 + 2;
          param_6[5] = 0;
          return 0;
        }
        if (uVar4 * 2 <= (ulonglong)uVar1) {
          memcpy(puVar2,param_3,uVar4 * 2);
          param_6[5] = 0;
          param_6[4] = uVar3 * 2;
          return 0;
        }
LAB_000144ae:
        param_6[5] = 0xc0000023;
        param_6[4] = param_4 & 0xfffffffe;
        return 0;
      }
    }
    else if (uVar1 == 4) {
      if (param_2 == 4) {
        if (param_6[4] < 4) {
          param_6[5] = 0xc0000023;
          param_6[4] = 4;
          return 0;
        }
        if (param_4 < 4) {
          param_6[5] = 0xc0000001;
          return 0;
        }
        **(undefined4 **)(param_6 + 2) = *param_3;
        param_6[4] = 4;
        param_6[5] = 0;
        return 0;
      }
    }
    else {
      if (uVar1 != 7) goto LAB_0001451c;
      if (param_2 == 7) {
        uVar1 = param_6[4];
        if (uVar1 < 4) goto LAB_0001446a;
        puVar2 = *(undefined2 **)(param_6 + 2);
        uVar3 = param_4 >> 1;
        uVar4 = (ulonglong)uVar3;
        if (uVar3 < 2) {
          *puVar2 = 0;
          puVar2[1] = 0;
          param_6[4] = 4;
          param_6[5] = 0;
          return 0;
        }
        if ((*(short *)((longlong)param_3 + (ulonglong)(uVar3 - 1) * 2) != 0) ||
           (*(short *)((longlong)param_3 + (ulonglong)(uVar3 - 2) * 2) != 0)) {
          uVar5 = uVar3 + 2;
          if ((ulonglong)uVar1 < (ulonglong)uVar5 * 2) {
            param_6[5] = 0xc0000023;
            param_6[4] = uVar5 * 2;
            return 0;
          }
          memcpy(puVar2,param_3,uVar4 * 2);
          puVar2[uVar4] = 0;
          puVar2[uVar3 + 1] = 0;
          param_6[5] = 0;
          param_6[4] = uVar5 * 2;
          return 0;
        }
        if (uVar4 * 2 <= (ulonglong)uVar1) {
          memcpy(puVar2,param_3,uVar4 * 2);
          param_6[5] = 0;
          param_6[4] = uVar3 * 2;
          return 0;
        }
        goto LAB_000144ae;
      }
    }
    param_6[5] = 0xc0000024;
  }
  return 0;
}

