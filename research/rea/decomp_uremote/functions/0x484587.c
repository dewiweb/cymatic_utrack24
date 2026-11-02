// rea decompile_all
// name: FUN_00484587
// address: 0x484587
// body: available
// range: 0x484587-0x4846e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484587(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *unaff_ESI;
  int local_10;
  
  bVar3 = true;
  puVar4 = (undefined4 *)(**(code **)unaff_ESI[1])();
  unaff_ESI[0x55] = (int)puVar4;
  *puVar4 = FUN_0041f3a2;
  puVar4[1] = FUN_00483f0a;
  *(undefined1 *)(puVar4 + 2) = 0;
  if (*(char *)((int)unaff_ESI + 0xb3) != '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x19;
    (**(code **)*unaff_ESI)();
  }
  local_10 = 0;
  if (0 < unaff_ESI[0xf]) {
    piVar5 = (int *)(unaff_ESI[0x11] + 0xc);
    puVar6 = puVar4 + 3;
    do {
      iVar1 = piVar5[-1];
      if ((iVar1 == unaff_ESI[0x36]) && (*piVar5 == unaff_ESI[0x37])) {
        if (unaff_ESI[0x2d] == 0) {
          *puVar6 = FUN_0048406d;
        }
        else {
          *puVar6 = FUN_00484439;
LAB_00484612:
          *(undefined1 *)(puVar4 + 2) = 1;
        }
      }
      else {
        iVar2 = unaff_ESI[0x36];
        if ((iVar1 * 2 == iVar2) && (*piVar5 == unaff_ESI[0x37])) {
          bVar3 = false;
          *puVar6 = FUN_004840ac;
        }
        else if ((iVar1 * 2 == iVar2) && (*piVar5 * 2 == unaff_ESI[0x37])) {
          if (unaff_ESI[0x2d] != 0) {
            *puVar6 = FUN_004841d4;
            goto LAB_00484612;
          }
          *puVar6 = FUN_00484132;
        }
        else if ((iVar2 % iVar1 == 0) && (unaff_ESI[0x37] % *piVar5 == 0)) {
          bVar3 = false;
          *puVar6 = FUN_00483f80;
        }
        else {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x26;
          (**(code **)*unaff_ESI)();
        }
      }
      local_10 = local_10 + 1;
      piVar5 = piVar5 + 0x15;
      puVar6 = puVar6 + 1;
    } while (local_10 < unaff_ESI[0xf]);
  }
  if ((unaff_ESI[0x2d] != 0) && (!bVar3)) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 99;
    (**(code **)(*unaff_ESI + 4))();
  }
  return;
}

