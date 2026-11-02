// rea decompile_all
// name: FUN_004851af
// address: 0x4851af
// body: available
// range: 0x4851af-0x48528e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004851af(void)

{
  int *in_EAX;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  int unaff_ESI;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(unaff_ESI + 0x188);
  local_5 = 0;
  if ((*(char *)(unaff_ESI + 200) == '\0') || (*(int *)(unaff_ESI + 0x8c) == 0)) {
LAB_00485289:
    uVar3 = (uint)in_EAX & 0xffffff00;
  }
  else {
    if (*(int *)(iVar2 + 0x70) == 0) {
      uVar1 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
      *(undefined4 *)(iVar2 + 0x70) = uVar1;
    }
    local_c = *(int *)(iVar2 + 0x70);
    puVar4 = *(undefined4 **)(unaff_ESI + 0xc4);
    local_14 = 0;
    if (0 < *(int *)(unaff_ESI + 0x24)) {
      puVar4 = puVar4 + 0x13;
      local_10 = 0;
      do {
        in_EAX = (int *)*puVar4;
        if (((((in_EAX == (int *)0x0) || ((short)*in_EAX == 0)) ||
             (*(short *)((int)in_EAX + 2) == 0)) ||
            (((short)in_EAX[4] == 0 || ((short)in_EAX[8] == 0)))) ||
           ((*(short *)((int)in_EAX + 0x12) == 0 ||
            (((short)in_EAX[1] == 0 ||
             (in_EAX = (int *)(*(int *)(unaff_ESI + 0x8c) + local_10), *in_EAX < 0))))))
        goto LAB_00485289;
        iVar5 = local_c - (int)in_EAX;
        iVar2 = 5;
        do {
          in_EAX = in_EAX + 1;
          *(int *)(iVar5 + (int)in_EAX) = *in_EAX;
          if (*in_EAX != 0) {
            local_5 = 1;
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        local_c = local_c + 0x18;
        local_14 = local_14 + 1;
        local_10 = local_10 + 0x100;
        puVar4 = puVar4 + 0x15;
      } while (local_14 < *(int *)(unaff_ESI + 0x24));
    }
    uVar3 = CONCAT31((int3)((uint)puVar4 >> 8),local_5);
  }
  return uVar3;
}

