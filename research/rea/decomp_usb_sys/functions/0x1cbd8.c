// rea decompile_all
// name: FUN_0001cbd8
// address: 0x1cbd8
// body: available
// range: 0x1cbd8-0x1ce27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001cbd8(longlong param_1,longlong param_2,byte *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  *(char *)(param_1 + 0x1c) = param_4;
  *(byte **)(param_1 + 0x20) = param_3;
  pbVar8 = param_3;
  do {
    for (pbVar7 = pbVar8; pbVar7 < (byte *)(*(longlong *)(param_2 + 0x1b78) + -2);
        pbVar7 = pbVar7 + *pbVar7) {
      if (pbVar7[1] == 5) goto LAB_0001cc31;
    }
    pbVar7 = (byte *)0x0;
LAB_0001cc31:
    *(byte **)(param_1 + 0x28) = pbVar7;
    if (((pbVar7 == (byte *)0x0) || (((pbVar7[2] & 0x80) != 0 && (param_4 != '\0')))) ||
       (((pbVar7[2] & 0x80) == 0 && (param_4 == '\0')))) break;
    pbVar8 = pbVar8 + *pbVar8;
  } while( true );
  for (; pbVar7 < (byte *)(*(longlong *)(param_2 + 0x1b78) + -4); pbVar7 = pbVar7 + *pbVar7) {
    if (pbVar7[1] == 0x25) goto LAB_0001cc7c;
  }
  pbVar7 = (byte *)0x0;
LAB_0001cc7c:
  *(byte **)(param_1 + 0x30) = pbVar7;
  if (pbVar7 == (byte *)0x0) {
LAB_0001cc85:
    uVar3 = 0xc0000001;
  }
  else {
    bVar6 = pbVar7[3];
    uVar9 = 0;
    pbVar7 = pbVar7 + 4;
    *(uint *)(param_1 + 0x18) = (uint)bVar6;
    if (bVar6 != 0) {
      do {
        puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0x48,0x5f6e6577);
        if (puVar4 == (ulonglong *)0x0) {
          puVar4 = (ulonglong *)0x0;
        }
        else {
          FUN_000264d0(puVar4,0,0x48);
          puVar4[1] = (ulonglong)puVar4;
          *puVar4 = (ulonglong)puVar4;
        }
        if (puVar4 == (ulonglong *)0x0) {
          return 0xc0000017;
        }
        pbVar5 = (byte *)(*(longlong *)(param_2 + 0x1b78) + -6);
        pbVar8 = param_3;
        if (*(char *)(param_1 + 0x1c) == '\0') {
          for (; pbVar8 < pbVar5; pbVar8 = pbVar8 + *pbVar8) {
            if ((pbVar8[1] == 0x24) &&
               (((pbVar8[2] == 2 || (pbVar8[2] == 3)) && (pbVar8[4] == *pbVar7))))
            goto LAB_0001cd4f;
          }
        }
        else {
          for (; pbVar8 < pbVar5; pbVar8 = pbVar8 + *pbVar8) {
            if (((pbVar8[1] == 0x24) && ((pbVar8[2] == 2 || (pbVar8[2] == 3)))) &&
               (pbVar8[4] == *pbVar7)) goto LAB_0001cd4f;
          }
        }
        pbVar8 = (byte *)0x0;
LAB_0001cd4f:
        puVar4[8] = (ulonglong)pbVar8;
        if (pbVar8 == (byte *)0x0) {
          ExFreePoolWithTag(puVar4,0);
          goto LAB_0001cc85;
        }
        if (*(char *)(param_1 + 0x1c) == '\0') {
          bVar6 = pbVar8[5];
        }
        else {
          bVar6 = pbVar8[(ulonglong)*pbVar8 - 1];
        }
        *(char *)(puVar4 + 7) = (char)uVar9;
        sprintf((char *)(puVar4 + 2),"Midi %s %d");
        if (bVar6 != 0) {
          FUN_0001bb78(param_2,bVar6,puVar4 + 2);
        }
        plVar2 = *(longlong **)(param_1 + 8);
        uVar9 = (uint)(byte)((char)uVar9 + 1);
        plVar1 = (longlong *)((longlong)puVar4 + *(longlong *)(param_1 + 0x10));
        pbVar7 = pbVar7 + 1;
        *plVar1 = *plVar2;
        plVar1[1] = (longlong)plVar2;
        *(longlong **)(*plVar2 + 8) = plVar1;
        *plVar2 = (longlong)plVar1;
      } while (uVar9 < *(uint *)(param_1 + 0x18));
    }
    uVar3 = 0;
  }
  return uVar3;
}

