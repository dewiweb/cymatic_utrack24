// rea decompile_all
// name: FUN_004c10a9
// address: 0x4c10a9
// body: available
// range: 0x4c10a9-0x4c11e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_004c10a9(int param_1,char param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint extraout_ECX;
  uint unaff_EBX;
  uint uVar5;
  
  puVar3 = &LAB_005dedae;
  if (unaff_EBX < *(uint *)(param_1 + 0x30)) {
    puVar3 = *(undefined1 **)(param_1 + 0x28);
    uVar5 = *(uint *)(puVar3 + unaff_EBX * 4);
  }
  else {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    if ((param_2 == '\0') || (puVar3 = (undefined1 *)FUN_004c016b(), (char)puVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      puVar3 = (undefined1 *)FUN_004c2bee();
      if ((*(byte *)(uVar5 + 0x68) & 2) != 0) {
        puVar3 = (undefined1 *)FUN_004c1690();
      }
    }
    if (unaff_EBX < *(uint *)(param_1 + 0x30)) {
      puVar3 = (undefined1 *)FUN_004f7828();
    }
    *(undefined4 *)(uVar5 + 0xc) = 0;
    if (*(int **)(uVar5 + 0x40) != (int *)0x0) {
      puVar3 = (undefined1 *)(**(code **)(**(int **)(uVar5 + 0x40) + 0x10))();
    }
    uVar4 = DAT_0095d698;
    if ((DAT_0095d698 == uVar5) ||
       (puVar3 = (undefined1 *)thunk_FUN_004c1278(uVar5), uVar4 = extraout_ECX, (char)puVar3 != '\0'
       )) {
      if (bVar1) {
        FUN_004f5fb6();
        if ((param_3 == '\0') && (DAT_0095d698 == uVar5)) {
          uVar4 = DAT_0095d698 & 0xffffff00;
        }
        else {
          uVar4 = 1;
        }
        FUN_004c312a(uVar4);
        cVar2 = FUN_004f5fce(0);
        if (cVar2 != '\0') {
          FUN_00474d0f();
          return uVar5;
        }
        FUN_004c301e();
        FUN_00474d0f();
      }
      else {
        if ((param_3 == '\0') && (uVar4 == uVar5)) {
          uVar4 = (uint)puVar3 & 0xffffff00;
        }
        else {
          uVar4 = 1;
        }
        FUN_004c312a(uVar4);
      }
    }
    if (param_3 != '\0') {
      FUN_004c12e0();
    }
    if (bVar1) {
      FUN_004c1285();
    }
  }
  return uVar5;
}

