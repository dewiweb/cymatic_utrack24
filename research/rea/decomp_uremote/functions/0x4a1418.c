// rea decompile_all
// name: FUN_004a1418
// address: 0x4a1418
// body: available
// range: 0x4a1418-0x4a1575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a1418(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *extraout_ECX;
  undefined1 *extraout_EDX;
  int iVar5;
  int unaff_EDI;
  undefined8 uVar6;
  int iStack00000008;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 *local_28;
  float local_24;
  int *local_20;
  float local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x4a1424;
  local_3c = *(float *)(unaff_EDI + 0x10);
  puStack_98 = local_58;
  local_40 = *(int **)(unaff_EDI + 0xc);
  puStack_9c = (undefined1 *)(unaff_EDI + 0x14);
  local_48 = 0;
  local_44 = 0;
  local_20 = local_40;
  local_1c = local_3c;
  pfVar3 = (float *)FUN_004a92ac();
  local_34 = *pfVar3;
  local_18 = 0;
  local_30 = pfVar3[1];
  piVar1 = (int *)*param_1;
  if (0 < *(int *)(unaff_EDI + 8)) {
    do {
      puStack_98 = (undefined1 *)0x4a1482;
      local_20 = (int *)FUN_004a13ed();
      local_40 = (int *)local_20[5];
      iStack00000008 = 0;
      local_3c = (float)local_20[6];
      local_2c = (float)local_40 + local_34;
      local_24 = local_30 + local_3c;
      if (0 < local_20[2]) {
        do {
          iVar2 = *(int *)(*local_20 + iStack00000008 * 4);
          puStack_9c = (undefined1 *)0x4a14c6;
          puStack_98 = (undefined1 *)iVar2;
          (**(code **)(*piVar1 + 0x68))();
          puStack_9c = (undefined1 *)(iVar2 + 4);
          local_28 = (undefined1 *)&puStack_9c;
          FUN_004d076d();
          FUN_00476c68();
          local_8 = 0;
          puStack_9c = extraout_EDX;
          (**(code **)(*piVar1 + 0x44))();
          local_8 = 0xffffffff;
          FUN_00476da0();
          iVar5 = 0;
          if (0 < *(int *)(iVar2 + 0x10)) {
            local_1c = 0.0;
            do {
              iVar4 = *(int *)(iVar2 + 8) + (int)local_1c;
              puStack_98 = (undefined1 *)(*(float *)(iVar4 + 8) + local_24);
              puStack_9c = (undefined1 *)(*(float *)(iVar4 + 4) + local_2c);
              local_28 = puStack_9c;
              uVar6 = FUN_00477188();
              puStack_98 = (undefined1 *)uVar6;
              puStack_9c = (undefined1 *)*extraout_ECX;
              (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x70))();
              local_1c = (float)((int)local_1c + 0x10);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(iVar2 + 0x10));
          }
          iStack00000008 = iStack00000008 + 1;
        } while (iStack00000008 < local_20[2]);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(unaff_EDI + 8));
  }
  return;
}

