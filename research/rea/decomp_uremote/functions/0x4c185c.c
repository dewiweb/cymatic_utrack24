// rea decompile_all
// name: FUN_004c185c
// address: 0x4c185c
// body: available
// range: 0x4c185c-0x4c19f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c185c(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int *unaff_EBX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_30 = &local_24;
  local_34 = 0x4c1871;
  FUN_0047ccfc();
  if ((*(byte *)((int)unaff_EBX + 0x69) & 0x80) != 0) {
    local_34 = 0x4c187f;
    (**(code **)(*unaff_EBX + 0x60))();
    goto LAB_004c18db;
  }
  local_30 = (undefined4 *)0x4c1886;
  FUN_0047cd0e();
  local_34 = 0;
  local_30 = (undefined4 *)0x0;
  local_14 = (undefined1 *)&local_44;
  local_44 = local_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_38 = local_18;
  cVar3 = FUN_004bfc4c();
  if (cVar3 == '\0') {
    local_30 = (undefined4 *)0x4c18c8;
    cVar3 = FUN_0047ccf5();
    if (cVar3 == '\0') goto LAB_004c18cc;
  }
  else {
LAB_004c18cc:
    local_34 = 0x4c18d4;
    (**(code **)(*unaff_EBX + 0x60))();
  }
  local_30 = (undefined4 *)0x4c18db;
  FUN_0047cd1a();
LAB_004c18db:
  if (0 < unaff_EBX[0xc]) {
    local_14 = (undefined1 *)0x0;
    local_10 = 1;
    do {
      iVar1 = *(int *)(local_14 + unaff_EBX[10]);
      if ((*(byte *)(iVar1 + 0x68) & 2) != 0) {
        if (*(int *)(iVar1 + 0x24) != 0) {
          local_30 = (undefined4 *)0x4c190e;
          FUN_0047cd0e();
          local_30 = *(undefined4 **)(iVar1 + 0x24);
          local_34 = 0x4c1916;
          FUN_0047cd79();
          if ((*(byte *)(iVar1 + 0x69) & 0x80) != 0) {
            local_30 = (undefined4 *)0x4c1923;
            cVar3 = FUN_0047ccf5();
            if (cVar3 == '\0') goto LAB_004c19b9;
          }
          local_30 = (undefined4 *)(iVar1 + 0x10);
          local_34 = 0x4c1934;
          cVar3 = FUN_0047ccb1();
          if (cVar3 == '\0') goto LAB_004c19c0;
          goto LAB_004c19b9;
        }
        local_30 = (undefined4 *)0x4c1949;
        cVar3 = FUN_004a6c8c();
        if (cVar3 == '\0') goto LAB_004c19c7;
        local_30 = (undefined4 *)0x4c1952;
        FUN_0047cd0e();
        if ((*(byte *)(iVar1 + 0x69) & 0x80) == 0) {
          local_30 = (undefined4 *)(iVar1 + 0x10);
          local_34 = 0x4c1961;
          cVar3 = FUN_0047ccb1();
          if (cVar3 != '\0') {
            local_5 = '\x01';
            local_c = local_10;
            if (local_10 < unaff_EBX[0xc]) {
              do {
                iVar1 = *(int *)(unaff_EBX[10] + local_c * 4);
                if ((((*(byte *)(iVar1 + 0x68) & 4) != 0) && ((*(byte *)(iVar1 + 0x68) & 2) != 0))
                   && (*(int *)(iVar1 + 0x24) == 0)) {
                  local_30 = (undefined4 *)(iVar1 + 0x10);
                  local_5 = '\0';
                  local_34 = 0x4c199d;
                  FUN_0047cce7();
                }
                local_c = local_c + 1;
              } while (local_c < unaff_EBX[0xc]);
              if (local_5 == '\0') {
                local_30 = (undefined4 *)0x4c19b5;
                cVar3 = FUN_0047ccf5();
                if (cVar3 != '\0') goto LAB_004c19c0;
              }
            }
            goto LAB_004c19b9;
          }
        }
        else {
LAB_004c19b9:
          local_30 = (undefined4 *)0x4c19c0;
          FUN_004c182a();
        }
LAB_004c19c0:
        local_30 = (undefined4 *)0x4c19c7;
        FUN_0047cd1a();
      }
LAB_004c19c7:
      local_14 = local_14 + 4;
      iVar1 = local_10 + 1;
      bVar2 = local_10 < unaff_EBX[0xc];
      local_10 = iVar1;
    } while (bVar2);
  }
  local_30 = (undefined4 *)0x4c19e0;
  FUN_0047cd0e();
  local_34 = 0x4c19e8;
  (**(code **)(*unaff_EBX + 100))();
  local_34 = 0x4c19ef;
  FUN_0047cd1a();
  return;
}

